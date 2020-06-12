#include "loginwindow.h"
#include "mainwindow.h"
#include "ui_loginwindow.h"
#include "customer.h"

#include <string>
#include <iostream>
#include <sstream>

#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>

LoginWindow::LoginWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);

    registerForm = new RegisterForm();

    connect(registerForm, &RegisterForm::goBackToLoginForm, this, &LoginWindow::show);

//    customerWindow =  new CustomerWindow();

//    connect(customerWindow, &CustomerWindow::goBackToMainWindow, this, &MainWindow::show);

    customer = new Customer;
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_BackToMainWindowFromLoginBtn_clicked()
{
    this->close();
    clearInputFields();
    emit toMainWindowFromLogin();
}

void LoginWindow::clearInputFields() {
    ui->loginNameInput->setText("");
    ui->loginPasswordInput->setText("");
}

void LoginWindow::on_goToResgisterButton_clicked()
{
    registerForm->show();
    clearInputFields();
    this->close();
}

void LoginWindow::on_confirmLoginButton_clicked()
{
    QString name = ui->loginNameInput->text();
    QString password = ui->loginPasswordInput->text();

    std::string usersName = name.toStdString();
    std::string usersPass = password.toStdString();

    bool correct = false;

    QFile usersPasswords("/home/anton/CourseWorkDb/passwords.txt");

    if (!usersPasswords.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QMessageBox::warning(this, "Error!", "Can not open file!");
            return;
    }

    QTextStream instream(&usersPasswords);
    QString line = instream.readAll();
    std::string all = line.toStdString();

    usersPasswords.close();

    std::stringstream ss(all);

    std::string strName, strPass;

    while ( ss >> strName >> strPass ) {

        if (strName == usersName && strPass == usersPass) {
            correct = true;
        }
    }

    if (!correct) {
        QMessageBox::warning(this, "Authorization info", "Wrong name or password!");
    } else {
        if (!isCustomerRegular(usersName)) {
        // go to customer window
        customerWindow =  new CustomerWindow(usersName);

        connect(customerWindow, &CustomerWindow::goBackToMainWindow, this, &LoginWindow::show);

        customerWindow->show();
        } else {
            regularCustomerWindow = new RegularCustomerWindow(usersName);

            connect(regularCustomerWindow, &RegularCustomerWindow::goBackToLoginWindow, this, &LoginWindow::show);

            regularCustomerWindow->show();
        }
        clearInputFields();
        this->close();
        QMessageBox::information(this, "Authorization info", "Login successfully!");
    }

}


bool LoginWindow::isCustomerRegular(std::string customerName) {
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
