/********************************************************************************
** Form generated from reading UI file 'registerform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERFORM_H
#define UI_REGISTERFORM_H

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
            RegisterForm->setObjectName(QStringLiteral("RegisterForm"));
        RegisterForm->resize(628, 424);
        label = new QLabel(RegisterForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 160, 67, 17));
        label_2 = new QLabel(RegisterForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 200, 67, 17));
        registerLogin = new QLineEdit(RegisterForm);
        registerLogin->setObjectName(QStringLiteral("registerLogin"));
        registerLogin->setGeometry(QRect(290, 160, 113, 25));
        registerPassword = new QLineEdit(RegisterForm);
        registerPassword->setObjectName(QStringLiteral("registerPassword"));
        registerPassword->setGeometry(QRect(290, 200, 113, 25));
        finishRegistrationButton = new QPushButton(RegisterForm);
        finishRegistrationButton->setObjectName(QStringLiteral("finishRegistrationButton"));
        finishRegistrationButton->setGeometry(QRect(220, 280, 141, 41));
        BackToLoginButton = new QPushButton(RegisterForm);
        BackToLoginButton->setObjectName(QStringLiteral("BackToLoginButton"));
        BackToLoginButton->setGeometry(QRect(468, 30, 121, 41));

        retranslateUi(RegisterForm);

        QMetaObject::connectSlotsByName(RegisterForm);
    } // setupUi

    void retranslateUi(QWidget *RegisterForm)
    {
        RegisterForm->setWindowTitle(QApplication::translate("RegisterForm", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("RegisterForm", "Login:", Q_NULLPTR));
        label_2->setText(QApplication::translate("RegisterForm", "Password:", Q_NULLPTR));
        finishRegistrationButton->setText(QApplication::translate("RegisterForm", "Done", Q_NULLPTR));
        BackToLoginButton->setText(QApplication::translate("RegisterForm", "Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RegisterForm: public Ui_RegisterForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERFORM_H
