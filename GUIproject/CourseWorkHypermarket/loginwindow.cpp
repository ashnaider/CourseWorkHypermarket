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

    setLineEditsValidator();
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::setLineEditsValidator() {
    ui->loginNameInput->setValidator(new QRegExpValidator(QRegExp(utilities->loginRegEx),
                                                          ui->loginNameInput));
    ui->loginPasswordInput->setValidator(new QRegExpValidator(QRegExp(utilities->passwordRegEx),
                                                              ui->loginPasswordInput));

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
    // get data from line inputs
    QString name = ui->loginNameInput->text();
    QString password = ui->loginPasswordInput->text();

    // get data from passwords file
    std::vector<std::vector<std::string>> passwords;
    passwords = utilities->readFileByWord(utilities->passwordsFile);
    std::string strName = name.toStdString();
    std::string strPass = password.toStdString();
    bool correct = false;

    // check
    for (const auto& line : passwords) {
        if (line[0] == strName) {
            if (line[1] == strPass) {
                correct = true;
                break;
            }
        }
    }

    if (correct) {
        // open customer window
        customerWindow =  new CustomerWindow(strName);

        connect(customerWindow, &CustomerWindow::goBackToMainWindow, this, &LoginWindow::show);

        customerWindow->show();

        clearInputFields();
        this->close();
        QMessageBox::information(this, "Authorization info", "Login successfully! You are customer");

    } else {
        QMessageBox::warning(this, "Authorization info", "Wrong name or password!");
    }

}

