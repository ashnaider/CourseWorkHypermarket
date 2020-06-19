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

    QWidget::setWindowTitle("Login");

    registerForm = new RegisterForm();

    connect(registerForm, &RegisterForm::goBackToLoginForm, this, &LoginWindow::show);

    utilities = new Utilities;

    this->setFixedSize(this->width(), this->height());
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

    QFile usersPasswords(passwordsFile);

    if (!usersPasswords.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QMessageBox::warning(this, "Error!", "Can not open file!");
            return;
    }

    QTextStream instream(&usersPasswords);
    QString line = instream.readAll();
    std::string all = line.toStdString();

    usersPasswords.close();

    std::stringstream ss(all);

    std::string temp;
    std::getline(ss, temp, ';');
    std::getline(ss, temp, ';');

    std::string strName, strPass;

    while (std::getline(ss, strName, ';')) {
        if (std::getline(ss, strPass, ';')) {

            strName.erase(strName.begin());
            if (strName == usersName && strPass == usersPass) {
                correct = true;
                break;
            }
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
        QMessageBox::information(this, "Authorization info", "Login successfully! You are customer");
    }

}

