/********************************************************************************
** Form generated from reading UI file 'customerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERWINDOW_H
#define UI_CUSTOMERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerWindow
{
public:
    QPushButton *backToLoginWindowFromCustomerButton;
    QLabel *label_2;
    QLabel *moneyLabel;
    QLabel *regulatCustomerTotalCostLabel;
    QLabel *regulaCustomerGreetingLabel;
    QComboBox *productListComboBox;
    QPushButton *buyProductPushButton;
    QTableWidget *productTableWidget;

    void setupUi(QWidget *CustomerWindow)
    {
        if (CustomerWindow->objectName().isEmpty())
            CustomerWindow->setObjectName(QString::fromUtf8("CustomerWindow"));
        CustomerWindow->resize(696, 637);
        backToLoginWindowFromCustomerButton = new QPushButton(CustomerWindow);
        backToLoginWindowFromCustomerButton->setObjectName(QString::fromUtf8("backToLoginWindowFromCustomerButton"));
        backToLoginWindowFromCustomerButton->setGeometry(QRect(500, 50, 161, 41));
        label_2 = new QLabel(CustomerWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 60, 101, 17));
        moneyLabel = new QLabel(CustomerWindow);
        moneyLabel->setObjectName(QString::fromUtf8("moneyLabel"));
        moneyLabel->setGeometry(QRect(140, 60, 67, 17));
        regulatCustomerTotalCostLabel = new QLabel(CustomerWindow);
        regulatCustomerTotalCostLabel->setObjectName(QString::fromUtf8("regulatCustomerTotalCostLabel"));
        regulatCustomerTotalCostLabel->setGeometry(QRect(220, 60, 261, 21));
        regulaCustomerGreetingLabel = new QLabel(CustomerWindow);
        regulaCustomerGreetingLabel->setObjectName(QString::fromUtf8("regulaCustomerGreetingLabel"));
        regulaCustomerGreetingLabel->setGeometry(QRect(280, 20, 121, 20));
        productListComboBox = new QComboBox(CustomerWindow);
        productListComboBox->setObjectName(QString::fromUtf8("productListComboBox"));
        productListComboBox->setGeometry(QRect(40, 120, 151, 25));
        buyProductPushButton = new QPushButton(CustomerWindow);
        buyProductPushButton->setObjectName(QString::fromUtf8("buyProductPushButton"));
        buyProductPushButton->setGeometry(QRect(300, 584, 89, 31));
        productTableWidget = new QTableWidget(CustomerWindow);
        productTableWidget->setObjectName(QString::fromUtf8("productTableWidget"));
        productTableWidget->setGeometry(QRect(40, 180, 611, 381));

        retranslateUi(CustomerWindow);

        QMetaObject::connectSlotsByName(CustomerWindow);
    } // setupUi

    void retranslateUi(QWidget *CustomerWindow)
    {
        CustomerWindow->setWindowTitle(QCoreApplication::translate("CustomerWindow", "Form", nullptr));
        backToLoginWindowFromCustomerButton->setText(QCoreApplication::translate("CustomerWindow", "Back ", nullptr));
        label_2->setText(QCoreApplication::translate("CustomerWindow", "Your money: ", nullptr));
        moneyLabel->setText(QCoreApplication::translate("CustomerWindow", "$0", nullptr));
        regulatCustomerTotalCostLabel->setText(QString());
        regulaCustomerGreetingLabel->setText(QString());
        buyProductPushButton->setText(QCoreApplication::translate("CustomerWindow", "Buy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomerWindow: public Ui_CustomerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERWINDOW_H
