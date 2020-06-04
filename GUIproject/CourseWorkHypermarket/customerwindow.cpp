#include "customerwindow.h"
#include "ui_customerwindow.h"

CustomerWindow::CustomerWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CustomerWindow)
{
    ui->setupUi(this);
}

CustomerWindow::~CustomerWindow()
{
    delete ui;
}

void CustomerWindow::on_BackToMainWindowFromCustomerBtn_clicked()
{
    this->close();
    emit toMainWindowFromCustomer();
}

