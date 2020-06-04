/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
            LoginWindow->setObjectName(QStringLiteral("LoginWindow"));
        LoginWindow->resize(733, 440);
        BackToMainWindowFromLoginBtn = new QPushButton(LoginWindow);
        BackToMainWindowFromLoginBtn->setObjectName(QStringLiteral("BackToMainWindowFromLoginBtn"));
        BackToMainWindowFromLoginBtn->setGeometry(QRect(550, 20, 171, 41));
        label = new QLabel(LoginWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(410, 20, 151, 41));
        label_2 = new QLabel(LoginWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(350, 120, 171, 41));
        loginNameInput = new QLineEdit(LoginWindow);
        loginNameInput->setObjectName(QStringLiteral("loginNameInput"));
        loginNameInput->setGeometry(QRect(350, 170, 141, 21));
        loginPasswordInput = new QLineEdit(LoginWindow);
        loginPasswordInput->setObjectName(QStringLiteral("loginPasswordInput"));
        loginPasswordInput->setGeometry(QRect(350, 210, 141, 21));
        label_3 = new QLabel(LoginWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(230, 170, 67, 17));
        label_4 = new QLabel(LoginWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(230, 210, 67, 17));
        confirmLoginButton = new QPushButton(LoginWindow);
        confirmLoginButton->setObjectName(QStringLiteral("confirmLoginButton"));
        confirmLoginButton->setGeometry(QRect(280, 270, 141, 31));
        label_5 = new QLabel(LoginWindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(190, 330, 141, 21));
        goToResgisterButton = new QPushButton(LoginWindow);
        goToResgisterButton->setObjectName(QStringLiteral("goToResgisterButton"));
        goToResgisterButton->setGeometry(QRect(340, 330, 111, 25));

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QWidget *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "Form", Q_NULLPTR));
        BackToMainWindowFromLoginBtn->setText(QApplication::translate("LoginWindow", "back to main window", Q_NULLPTR));
        label->setText(QApplication::translate("LoginWindow", "You are customer", Q_NULLPTR));
        label_2->setText(QApplication::translate("LoginWindow", "Login:", Q_NULLPTR));
        label_3->setText(QApplication::translate("LoginWindow", "Name:", Q_NULLPTR));
        label_4->setText(QApplication::translate("LoginWindow", "Password:", Q_NULLPTR));
        confirmLoginButton->setText(QApplication::translate("LoginWindow", "Enter", Q_NULLPTR));
        label_5->setText(QApplication::translate("LoginWindow", "Don't have account? ", Q_NULLPTR));
        goToResgisterButton->setText(QApplication::translate("LoginWindow", "Register now", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
