/********************************************************************************
** Form generated from reading UI file 'registerform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERFORM_H
#define UI_REGISTERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterForm
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *registerLogin;
    QLineEdit *registerPassword;
    QPushButton *finishRegistrationButton;
    QPushButton *BackToLoginButton;

    void setupUi(QWidget *RegisterForm)
    {
        if (RegisterForm->objectName().isEmpty())
            RegisterForm->setObjectName(QString::fromUtf8("RegisterForm"));
        RegisterForm->resize(628, 424);
        label = new QLabel(RegisterForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 160, 67, 17));
        label_2 = new QLabel(RegisterForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(190, 200, 67, 17));
        registerLogin = new QLineEdit(RegisterForm);
        registerLogin->setObjectName(QString::fromUtf8("registerLogin"));
        registerLogin->setGeometry(QRect(290, 160, 113, 25));
        registerPassword = new QLineEdit(RegisterForm);
        registerPassword->setObjectName(QString::fromUtf8("registerPassword"));
        registerPassword->setGeometry(QRect(290, 200, 113, 25));
        finishRegistrationButton = new QPushButton(RegisterForm);
        finishRegistrationButton->setObjectName(QString::fromUtf8("finishRegistrationButton"));
        finishRegistrationButton->setGeometry(QRect(220, 280, 141, 41));
        BackToLoginButton = new QPushButton(RegisterForm);
        BackToLoginButton->setObjectName(QString::fromUtf8("BackToLoginButton"));
        BackToLoginButton->setGeometry(QRect(468, 30, 121, 41));

        retranslateUi(RegisterForm);

        QMetaObject::connectSlotsByName(RegisterForm);
    } // setupUi

    void retranslateUi(QWidget *RegisterForm)
    {
        RegisterForm->setWindowTitle(QCoreApplication::translate("RegisterForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("RegisterForm", "Login:", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterForm", "Password:", nullptr));
        finishRegistrationButton->setText(QCoreApplication::translate("RegisterForm", "Done", nullptr));
        BackToLoginButton->setText(QCoreApplication::translate("RegisterForm", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterForm: public Ui_RegisterForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERFORM_H
