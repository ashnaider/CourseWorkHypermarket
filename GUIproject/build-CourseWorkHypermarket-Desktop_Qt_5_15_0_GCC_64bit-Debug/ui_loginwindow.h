/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QPushButton *BackToMainWindowFromLoginBtn;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *loginNameInput;
    QLineEdit *loginPasswordInput;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *confirmLoginButton;
    QLabel *label_5;
    QPushButton *goToResgisterButton;

    void setupUi(QWidget *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QString::fromUtf8("LoginWindow"));
        LoginWindow->resize(733, 440);
        BackToMainWindowFromLoginBtn = new QPushButton(LoginWindow);
        BackToMainWindowFromLoginBtn->setObjectName(QString::fromUtf8("BackToMainWindowFromLoginBtn"));
        BackToMainWindowFromLoginBtn->setGeometry(QRect(550, 20, 171, 41));
        label = new QLabel(LoginWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(410, 20, 151, 41));
        label_2 = new QLabel(LoginWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(350, 120, 171, 41));
        loginNameInput = new QLineEdit(LoginWindow);
        loginNameInput->setObjectName(QString::fromUtf8("loginNameInput"));
        loginNameInput->setGeometry(QRect(350, 170, 141, 21));
        loginPasswordInput = new QLineEdit(LoginWindow);
        loginPasswordInput->setObjectName(QString::fromUtf8("loginPasswordInput"));
        loginPasswordInput->setGeometry(QRect(350, 210, 141, 21));
        label_3 = new QLabel(LoginWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 170, 67, 17));
        label_4 = new QLabel(LoginWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(230, 210, 67, 17));
        confirmLoginButton = new QPushButton(LoginWindow);
        confirmLoginButton->setObjectName(QString::fromUtf8("confirmLoginButton"));
        confirmLoginButton->setGeometry(QRect(280, 270, 141, 31));
        label_5 = new QLabel(LoginWindow);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(190, 330, 141, 21));
        goToResgisterButton = new QPushButton(LoginWindow);
        goToResgisterButton->setObjectName(QString::fromUtf8("goToResgisterButton"));
        goToResgisterButton->setGeometry(QRect(340, 330, 111, 25));

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QWidget *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "Form", nullptr));
        BackToMainWindowFromLoginBtn->setText(QCoreApplication::translate("LoginWindow", "back to main window", nullptr));
        label->setText(QCoreApplication::translate("LoginWindow", "You are customer", nullptr));
        label_2->setText(QCoreApplication::translate("LoginWindow", "Login:", nullptr));
        label_3->setText(QCoreApplication::translate("LoginWindow", "Name:", nullptr));
        label_4->setText(QCoreApplication::translate("LoginWindow", "Password:", nullptr));
        confirmLoginButton->setText(QCoreApplication::translate("LoginWindow", "Enter", nullptr));
        label_5->setText(QCoreApplication::translate("LoginWindow", "Don't have account? ", nullptr));
        goToResgisterButton->setText(QCoreApplication::translate("LoginWindow", "Register now", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
