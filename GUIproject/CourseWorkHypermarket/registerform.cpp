#include "registerform.h"
#include "ui_registerform.h"

#include <QString>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QRegExpValidator>>

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

    setLineEditValidation();
}

RegisterForm::~RegisterForm()
{
    delete ui;
}

void RegisterForm::setLineEditValidation() {
    ui->registerLogin->setValidator(new QRegExpValidator(QRegExp(utilities->loginRegEx),
                                                          ui->registerPassword));
    ui->registerPassword->setValidator(new QRegExpValidator(QRegExp(utilities->passwordRegEx),
                                                              ui->registerLogin));
}

void RegisterForm::on_finishRegistrationButton_clicked()
{
    QString newName = ui->registerLogin->text();
    QString newPass = ui->registerPassword->text();

    std::string strNewName = newName.toStdString();
    std::string strNewPass = newPass.toStdString();

    std::vector<std::vector<std::string>> passwords;
    passwords = utilities->readFileByWord(utilities->passwordsFile);
    bool correct = true;
    for (const auto& line : passwords) {
        if (line[0] == strNewName) {
            correct = false;
        }
    }

    if (correct) {

        saveNewUser(strNewName, strNewPass);
        QMessageBox::information(this, "Register info", "Registered Successfully!");

        // go back
        this->close();
        emit goBackToLoginForm();

    } else {
        QMessageBox::warning(this, "Rgister info", "This name is allready in use.\nPlease choose another one");
    }
}

void RegisterForm::saveNewUser(std::string newName, std::string newPassword) {

    utilities->appendInfoToFile({newName, newPassword}, utilities->passwordsFile);

    utilities->appendInfoToFile({newName, "usual", "1500", "", ""}, utilities->moneyFile);
}

void RegisterForm::clearLineInputFields() {
    ui->registerLogin->clear();
    ui->registerPassword->clear();
}

void RegisterForm::on_BackToLoginButton_clicked()
{
    // go back
    this->close();
    clearLineInputFields();
    emit goBackToLoginForm();
}
