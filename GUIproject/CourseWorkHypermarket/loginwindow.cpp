#include "loginwindow.h"
#include "mainwindow.h"
#include "ui_loginwindow.h"

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

        // go to customer window
        customerWindow =  new CustomerWindow(usersName);

        connect(customerWindow, &CustomerWindow::goBackToMainWindow, this, &LoginWindow::show);

        customerWindow->show();

        clearInputFields();
        this->close();
        QMessageBox::information(this, "Authorization info", "Login successfully!");
    }

}

