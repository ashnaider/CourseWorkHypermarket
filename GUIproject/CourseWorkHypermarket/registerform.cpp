#include "registerform.h"
#include "ui_registerform.h"

#include <QString>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

#include <string>
#include <sstream>

RegisterForm::RegisterForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RegisterForm)
{
    ui->setupUi(this);

    QWidget::setWindowTitle("Registration");

    this->setFixedSize(this->width(), this->height());

    utilities = new Utilities;
}

RegisterForm::~RegisterForm()
{
    delete ui;
}

void RegisterForm::on_finishRegistrationButton_clicked()
{
    QString newName = ui->registerLogin->text();
    QString newPass = ui->registerPassword->text();

    std::string strNewName = newName.toStdString();
    std::string strNewPass = newPass.toStdString();

    QFile usersPasswords(utilities->passwordsFile);

    if (!usersPasswords.open(QIODevice::ReadWrite | QIODevice::Text)) {
                    QMessageBox::warning(this, "Error!", "Can not open file!");
            return;
    }

    QTextStream mystream(&usersPasswords);
    QString line = mystream.readAll();
    std::string all = line.toStdString();

    std::stringstream ss(all);

    std::string strName, strPass;

    std::getline(ss, strName, ';');
    std::getline(ss, strName, ';');

    bool correct = true;

    while ( std::getline(ss, strName, ';') ) {
        if (std::getline(ss, strPass, ';')) {
            strName.erase(strName.begin());
            if (strName == strNewName) {
                correct = false;
            }
        }
    }
    newName += ";";
    newPass += ";\n";
    if (correct) {
        mystream << newName << newPass;
        QMessageBox::information(this, "Register info", "Registered Successfully!");

        usersPasswords.close();

        writeUsersInfo(strNewName);

        // go back
        this->close();
        emit goBackToLoginForm();

    } else {
        QMessageBox::warning(this, "Rgister info", "This name is allready in use.\nPlease choose another one");
    }
    usersPasswords.close();
}

void RegisterForm::writeUsersInfo(std::string name) {
    QFile file(utilities->moneyFile);
    if (!file.open(QIODevice::Append | QIODevice::Text)) {
                    QMessageBox::warning(this, "Error!", "Can not open file money in register form!");
            return;
    }

    QTextStream stream(&file);

    QString temp = ";usual;1500;;;";
    stream << QString::fromStdString(name) << temp << endl;

    file.flush();
    file.close();
}

void RegisterForm::on_BackToLoginButton_clicked()
{
    // go back
    this->close();
    emit goBackToLoginForm();
}
