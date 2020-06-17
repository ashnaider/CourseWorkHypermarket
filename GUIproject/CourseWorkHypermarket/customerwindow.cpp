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

#include <vector>
#include <string>
#include <sstream>

CustomerWindow::CustomerWindow(std::string customerName, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CustomerWindow) ,
    customerName(customerName)
{
    ui->setupUi(this);

    QWidget::setWindowTitle("Customer");

    isCustomerRegularBool = isCustomerRegular(customerName);

    if (isCustomerRegularBool) {
        customer = new RegularCustomer(customerName);
        setRegularCustomerInfo();
    } else {
        customer = new Customer(customerName);
    }

    setMoneyOnScreen(customer->GetMoney());

    setProductsComboBox();

    utilities = new Utilities();
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


void CustomerWindow::setMoneyOnScreen(double money) {
     ui->moneyLabel->setText( QString::number( money ) );
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
std::vector<std::string> CustomerWindow::getProductList() {
    QString fileName = "/home/anton/CourseWorkDb/products.txt";
    std::vector<std::vector<std::string>> allFile = utilities->readFileByWord(fileName);

    std::vector<std::string> productList;
    for (const auto& line : allFile) {
        productList.push_back(line[0]);
    }

    return productList;
}

void CustomerWindow::setProductsComboBox() {
    std::vector<std::string> productList = getProductList();

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

void CustomerWindow::on_findProductsButton_clicked()
{
    QString productName = ui->productListComboBox->currentText();

    addProductsOnScreen(productName);
}

void CustomerWindow::on_buyProductPushButton_clicked()
{
//    int selectedProductIndex = ui->productListComboBox->currentIndex();

//    if (customer->BuyProduct({currentProductList[0], currentProductList[1],
//                              currentProductList[2], currentProductList[3]}) ) {
//        setMoneyOnScreen(customer->GetMoney());
//        setTotalCostOfBoughtProducts();

//    } else {
//        QMessageBox::warning(this, "Oops", "You havn't got enought money!");
//    }

}





/*
    // add products to screen
    QString fullPath = "/home/anton/CourseWorkDb/" + productName + ".txt";
    std::vector<std::vector<std::string>> products = utilities->readFileByWord(fullPath);

    currentProductList = products;

    // fill productsPriceMap
    for (const auto& product : currentProductList) {
        productsPriceMap[product[1]] = std::stod(product[2]);
    }

    QString imgPath = "/home/anton/CourseWorkDb/img/";
    QString ext = ".txt";
    std::string strProductName;

    for (const auto& product : products) {
        strProductName = product[product.size() - 1];
        utilities->replaceSymbol(strProductName, ' ', '_');
        QString totalPath = imgPath + QString::fromStdString(strProductName) + ext;

        // set data for table widget

        QTableWidgetItem *newItem = new QTableWidgetItem("my custom item!");
        int rows = 5;
        int cols = 5;

        ui->productListTableWidget->setRowCount(rows);
        ui->productListTableWidget->setColumnCount(cols);

        ui->productListTableWidget->setItem(3, 3, newItem);
    }
*/
