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
    QPushButton *BackToMainWindowFromCustomerBtn;
    QLabel *label;

    void setupUi(QWidget *CustomerWindow)
    {
        if (CustomerWindow->objectName().isEmpty())
            CustomerWindow->setObjectName(QStringLiteral("CustomerWindow"));
        CustomerWindow->resize(733, 440);
        BackToMainWindowFromCustomerBtn = new QPushButton(CustomerWindow);
        BackToMainWindowFromCustomerBtn->setObjectName(QStringLiteral("BackToMainWindowFromCustomerBtn"));
        BackToMainWindowFromCustomerBtn->setGeometry(QRect(550, 20, 171, 41));
        label = new QLabel(CustomerWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(410, 20, 151, 41));

        retranslateUi(CustomerWindow);

        QMetaObject::connectSlotsByName(CustomerWindow);
    } // setupUi

    void retranslateUi(QWidget *CustomerWindow)
    {
        CustomerWindow->setWindowTitle(QApplication::translate("CustomerWindow", "Form", Q_NULLPTR));
        BackToMainWindowFromCustomerBtn->setText(QApplication::translate("CustomerWindow", "back to main window", Q_NULLPTR));
        label->setText(QApplication::translate("CustomerWindow", "You are customer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CustomerWindow: public Ui_CustomerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERWINDOW_H
