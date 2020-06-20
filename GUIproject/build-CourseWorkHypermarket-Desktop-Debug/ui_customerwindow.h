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
    QPushButton *findProductsButton;
    QPushButton *buyProductPushButton;
    QTableWidget *productTableWidget;

    void setupUi(QWidget *CustomerWindow)
    {
        if (CustomerWindow->objectName().isEmpty())
            CustomerWindow->setObjectName(QStringLiteral("CustomerWindow"));
        CustomerWindow->resize(696, 637);
        backToLoginWindowFromCustomerButton = new QPushButton(CustomerWindow);
        backToLoginWindowFromCustomerButton->setObjectName(QStringLiteral("backToLoginWindowFromCustomerButton"));
        backToLoginWindowFromCustomerButton->setGeometry(QRect(500, 50, 161, 41));
        label_2 = new QLabel(CustomerWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 60, 101, 17));
        moneyLabel = new QLabel(CustomerWindow);
        moneyLabel->setObjectName(QStringLiteral("moneyLabel"));
        moneyLabel->setGeometry(QRect(140, 60, 67, 17));
        regulatCustomerTotalCostLabel = new QLabel(CustomerWindow);
        regulatCustomerTotalCostLabel->setObjectName(QStringLiteral("regulatCustomerTotalCostLabel"));
        regulatCustomerTotalCostLabel->setGeometry(QRect(220, 60, 261, 21));
        regulaCustomerGreetingLabel = new QLabel(CustomerWindow);
        regulaCustomerGreetingLabel->setObjectName(QStringLiteral("regulaCustomerGreetingLabel"));
        regulaCustomerGreetingLabel->setGeometry(QRect(280, 20, 121, 20));
        productListComboBox = new QComboBox(CustomerWindow);
        productListComboBox->setObjectName(QStringLiteral("productListComboBox"));
        productListComboBox->setGeometry(QRect(40, 120, 151, 25));
        findProductsButton = new QPushButton(CustomerWindow);
        findProductsButton->setObjectName(QStringLiteral("findProductsButton"));
        findProductsButton->setGeometry(QRect(220, 120, 89, 25));
        buyProductPushButton = new QPushButton(CustomerWindow);
        buyProductPushButton->setObjectName(QStringLiteral("buyProductPushButton"));
        buyProductPushButton->setGeometry(QRect(300, 584, 89, 31));
        productTableWidget = new QTableWidget(CustomerWindow);
        productTableWidget->setObjectName(QStringLiteral("productTableWidget"));
        productTableWidget->setGeometry(QRect(40, 180, 611, 381));

        retranslateUi(CustomerWindow);

        QMetaObject::connectSlotsByName(CustomerWindow);
    } // setupUi

    void retranslateUi(QWidget *CustomerWindow)
    {
        CustomerWindow->setWindowTitle(QApplication::translate("CustomerWindow", "Form", Q_NULLPTR));
        backToLoginWindowFromCustomerButton->setText(QApplication::translate("CustomerWindow", "Back ", Q_NULLPTR));
        label_2->setText(QApplication::translate("CustomerWindow", "Your money: ", Q_NULLPTR));
        moneyLabel->setText(QApplication::translate("CustomerWindow", "$0", Q_NULLPTR));
        regulatCustomerTotalCostLabel->setText(QString());
        regulaCustomerGreetingLabel->setText(QString());
        findProductsButton->setText(QApplication::translate("CustomerWindow", "find", Q_NULLPTR));
        buyProductPushButton->setText(QApplication::translate("CustomerWindow", "Buy", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CustomerWindow: public Ui_CustomerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERWINDOW_H
