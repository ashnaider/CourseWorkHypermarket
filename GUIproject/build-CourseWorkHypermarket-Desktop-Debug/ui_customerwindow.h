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
    QLabel *label;
    QPushButton *goToMainWindowFromCustomerButton;

    void setupUi(QWidget *CustomerWindow)
    {
        if (CustomerWindow->objectName().isEmpty())
            CustomerWindow->setObjectName(QStringLiteral("CustomerWindow"));
        CustomerWindow->resize(685, 439);
        label = new QLabel(CustomerWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 190, 251, 41));
        goToMainWindowFromCustomerButton = new QPushButton(CustomerWindow);
        goToMainWindowFromCustomerButton->setObjectName(QStringLiteral("goToMainWindowFromCustomerButton"));
        goToMainWindowFromCustomerButton->setGeometry(QRect(470, 30, 171, 41));

        retranslateUi(CustomerWindow);

        QMetaObject::connectSlotsByName(CustomerWindow);
    } // setupUi

    void retranslateUi(QWidget *CustomerWindow)
    {
        CustomerWindow->setWindowTitle(QApplication::translate("CustomerWindow", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("CustomerWindow", "login successfully. You are customer.", Q_NULLPTR));
        goToMainWindowFromCustomerButton->setText(QApplication::translate("CustomerWindow", "Back to main window", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CustomerWindow: public Ui_CustomerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERWINDOW_H
