#include "customerwindow.h"
#include "ui_customerwindow.h"

#include <QString>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QLabel>
#include <QListWidget>
#include <QListWidgetItem>
#include <QStringList>
#include <QInputDialog>
#include <QDir>

#include <vector>
#include <string>
#include <sstream>
#include <iomanip>

CustomerWindow::CustomerWindow(std::string customerName, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CustomerWindow) ,
    customerName(customerName)
{
    ui->setupUi(this);

    utilities = new Utilities();

    QWidget::setWindowTitle("Customer");

    customer = new Customer(customerName);
    isCustomerRegularBool = isCustomerRegular(customerName);
    delete customer;

    if (isCustomerRegularBool) {
        customer = new RegularCustomer(customerName);
        setRegularCustomerInfo();
    } else {
        customer = new Customer(customerName);
    }

    setMoneyOnScreen();

    setProductsComboBox();

    this->setFixedSize(this->width(), this->height());
}

CustomerWindow::~CustomerWindow()
{
    delete ui;
}

void CustomerWindow::on_backToLoginWindowFromCustomerButton_clicked()
{
    this->close();
    emit goBackToMainWindow();
}


void CustomerWindow::setMoneyOnScreen() {
     ui->moneyLabel->setText( QString::number( customer->GetMoney() ) );
}


bool CustomerWindow::isCustomerRegular(std::string customerName) {
    std::vector<std::string> customerInfo = customer->findCustomerInfo(customerName);

    bool result;
    if (customerInfo[1] == "regular") {
        result = true;
    } else {
        result = false;
    }

    // QMessageBox::information(this, "info", "you are " + QString::fromStdString(customerInfo[1]) + " customer");

    return result;
}

void CustomerWindow::setTotalCostOfBoughtProducts() {
    ui->regulatCustomerTotalCostLabel->setText("Total cost of bought products: "
                                               + QString::number(customer->GetTotalCostOfBoughtProducts() ));
}

void CustomerWindow::setRegularCustomerInfo() {
    std::string customerFirstName = customer->GetFirstName();
    ui->regulaCustomerGreetingLabel->setText("Hello, " + QString::fromStdString(customerFirstName) + "!" );
    setTotalCostOfBoughtProducts();
}


/* combo box functions */

void CustomerWindow::setProductsComboBox() {
    std::vector<std::string> productList = utilities->getProductList();

    for (const auto& product : productList) {
        ui->productListComboBox->addItem(QString::fromStdString(product));
    }
}
/* ---------------------------------------- */



void CustomerWindow::addProductsOnScreen(QString productName)
{
    if (productList) {
        delete productList;
        productList = nullptr;
    }
    productList = new ProductList(productName);

    int rows = productList->ptrVecProductList.size();
    int cols = productList->GetFieldsQuantity();

    ui->productTableWidget->setRowCount(rows);
    ui->productTableWidget->setColumnCount(cols);
    ui->productTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

    QHeaderView *header = ui->productTableWidget->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::ResizeToContents);

    ui->productTableWidget->setHorizontalHeaderLabels(productList->GetProductInfoHeader());

    for (int row = 0; row < rows; ++row) {
        std::vector<std::string> pInfo = productList->GetProductInfoInVec(row);
        for (int col = 0; col < cols; ++col) {
           QString sItem = QString::fromStdString(pInfo[col]);
           QTableWidgetItem *item = new QTableWidgetItem(sItem);
           item->setFlags(item->flags() & ~Qt::ItemIsEditable); // non editable cells
           ui->productTableWidget->setItem(row, col, item);
        }
    }
}

void CustomerWindow::updateUserInfoOnScreen() {
    setMoneyOnScreen();
    if (isCustomerRegularBool) {
        setTotalCostOfBoughtProducts();
        setRegularCustomerInfo();
    }
}

void CustomerWindow::on_buyProductPushButton_clicked()
{

    std::vector<int> selectedRows;
    QModelIndexList selection = ui->productTableWidget->selectionModel()->selectedRows();
    for (int i = 0; i < selection.count(); ++i) {
        QModelIndex index = selection.at(i);
        selectedRows.push_back(index.row());
    }

    double total_cost = 0;
    for (const auto row : selectedRows) {
        total_cost += customer->GetFinalProductPrice(productList->ptrVecProductList[row]);
    }

    QMessageBox::StandardButton buy;
    buy = QMessageBox::question(this, "Accept", "Do you agree with the purchase?\nTotal cost with your personal discount: "
                                 + QString::number(total_cost),
                                 QMessageBox::Yes|QMessageBox::No);

    if (buy == QMessageBox::Yes) {
         for (const auto row : selectedRows) {
            if (customer->BuyProduct(productList->ptrVecProductList[row]) ) {
                if (!isCustomerRegularBool) {
                     updateToRegularCustomer(productList->ptrVecProductList[row]->GetPrice());
                }
                updateUserInfoOnScreen();
                saveInfo();

            } else {
                QMessageBox::warning(this, "Oops", "You havn't got enought money!");
            }
         }
    }

    ui->productTableWidget->clearSelection();
}


void CustomerWindow::updateToRegularCustomer(double boughtProductPrice) {

    bool ok;
    QString name = QInputDialog::getText(this, tr("Would you like to become a regular customer?"),
                                tr("Enter your name: "), QLineEdit::Normal,
                                QDir::home().dirName(), &ok);

    if (ok && !name.isEmpty()) {
        std::vector<std::string> nameVec;
        std::stringstream ss(name.toStdString());
        std::string temp;
        while (ss >> temp) {
            nameVec.push_back(temp);
        }

        double money = customer->GetMoney();
        delete customer;

        customer = new RegularCustomer(money, nameVec, boughtProductPrice);

        isCustomerRegularBool = true;

        updateUserInfoOnScreen();
    }
}


void CustomerWindow::saveInfo() {
    std::vector<std::vector<std::string>> moneyInfo = utilities->readFileByWord(utilities->moneyFile,
                                                                                true);

    std::stringstream stream;
    stream << std::fixed << std::setprecision(2) << customer->GetMoney();
    std::string newMoney = stream.str();

    stream.str("");
    stream << std::fixed << std::setprecision(2) << customer->GetTotalCostOfBoughtProducts();
    std::string newBought = stream.str();

    for (auto& line : moneyInfo) {
        if (line[0] == customerName) {
            line[1] = customer->GetStatus();
            line[2] = newMoney;
            if (isCustomerRegularBool) {
                line[3] = newBought;
                line[4] = customer->GetFullNameInStr();
            }
        }
    }
    std::vector<std::string> header = moneyInfo[0];
    moneyInfo.erase(moneyInfo.begin());

    utilities->saveInfoToFile(header, moneyInfo, utilities->moneyFile);
}


void CustomerWindow::on_productListComboBox_currentTextChanged(const QString &arg1)
{
    addProductsOnScreen(arg1);
}
