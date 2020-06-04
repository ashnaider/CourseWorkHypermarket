/********************************************************************************
** Form generated from reading UI file 'customerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERWINDOW_H
#define UI_CUSTOMERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerWindow
{
public:
    QPushButton *backToLoginWindowFromCustomerButton;
    QLabel *label;

    void setupUi(QWidget *CustomerWindow)
    {
        if (CustomerWindow->objectName().isEmpty())
            CustomerWindow->setObjectName(QStringLiteral("CustomerWindow"));
        CustomerWindow->resize(607, 419);
        backToLoginWindowFromCustomerButton = new QPushButton(CustomerWindow);
        backToLoginWindowFromCustomerButton->setObjectName(QStringLiteral("backToLoginWindowFromCustomerButton"));
        backToLoginWindowFromCustomerButton->setGeometry(QRect(408, 40, 161, 41));
        label = new QLabel(CustomerWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 190, 251, 21));

        retranslateUi(CustomerWindow);

        QMetaObject::connectSlotsByName(CustomerWindow);
    } // setupUi

    void retranslateUi(QWidget *CustomerWindow)
    {
        CustomerWindow->setWindowTitle(QApplication::translate("CustomerWindow", "Form", Q_NULLPTR));
        backToLoginWindowFromCustomerButton->setText(QApplication::translate("CustomerWindow", "Back ", Q_NULLPTR));
        label->setText(QApplication::translate("CustomerWindow", "Login successfully. You are customer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CustomerWindow: public Ui_CustomerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERWINDOW_H
