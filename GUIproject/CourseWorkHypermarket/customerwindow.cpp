#include "customerwindow.h"
#include "ui_customerwindow.h"

#include <QString>

CustomerWindow::CustomerWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CustomerWindow)
{
    ui->setupUi(this);

    // add here money, to show
    double money = 444;
    customer = new Customer(money);

    ui->moneyLabel->setText( QString::number( customer->GetMoney() ) );
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
