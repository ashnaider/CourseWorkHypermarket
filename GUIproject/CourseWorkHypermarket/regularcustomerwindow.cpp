#include "regularcustomerwindow.h"
#include "ui_regularcustomerwindow.h"

#include <string>

RegularCustomerWindow::RegularCustomerWindow(std::string customerName, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RegularCustomerWindow),
    customerName(customerName)
{
    ui->setupUi(this);
}

RegularCustomerWindow::~RegularCustomerWindow()
{
    delete ui;
}

void RegularCustomerWindow::on_backToLoginWindowButton_clicked()
{
    this->close();
    emit goBackToLoginWindow();
}
