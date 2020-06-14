#include "customerwindow.h"
#include "ui_customerwindow.h"

#include <QString>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QLabel>

#include <vector>
#include <string>
#include <sstream>

CustomerWindow::CustomerWindow(std::string customerName, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CustomerWindow) ,
    customerName(customerName)
{
    ui->setupUi(this);

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

void CustomerWindow::setRegularCustomerInfo() {
    std::string customerFirstName = customer->GetFirstName();
    ui->regulaCustomerGreetingLabel->setText("Hello, " + QString::fromStdString(customerFirstName) + "!" );
    ui->regulatCustomerTotalCostLabel->setText("Total cost of bought products: "
                                               + QString::number(customer->GetTotalCostOfBoughtProducts() ));
}


std::vector<std::string> CustomerWindow::getProductList() {
    std::string fileName = "/home/anton/CourseWorkDb/products.txt";
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
