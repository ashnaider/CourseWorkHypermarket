#include "customerwindow.h"
#include "ui_customerwindow.h"

#include <QString>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

#include <vector>
#include <string>
#include <sstream>

CustomerWindow::CustomerWindow(std::string customerName, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CustomerWindow) ,
    customerName(customerName)
{
    ui->setupUi(this);

    //createCustomer();

    // QMessageBox::information(this, "Ok", "Customer name " + QString::fromStdString(customerName));

    setMoneyOnScreen(234.5);
};

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

