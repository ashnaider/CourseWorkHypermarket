/********************************************************************************
** Form generated from reading UI file 'ownereditcustomersinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWNEREDITCUSTOMERSINFO_H
#define UI_OWNEREDITCUSTOMERSINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OwnerEditCustomersInfo
{
public:
    QPushButton *goBackToOwnerButton;
    QWidget *layoutWidget;
    QVBoxLayout *customersTableInfoVerticalLayout;
    QTableWidget *customersInfoTableWidget;
    QHBoxLayout *customerTableInfoHorizontalLayout;
    QPushButton *addNewCustomerPushButton;
    QPushButton *editCustomerPushButton;
    QPushButton *deleteCustomerPushButton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *customerEditVerticalLayout;
    QHBoxLayout *totalCostHorizontalLayout;
    QLabel *totalCostLabel;
    QLineEdit *totalCostLineEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *NameHorizontalLayout;
    QLabel *NameLabel;
    QLineEdit *NameLineEdit;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *ButtonsHorizontalLayout;
    QPushButton *cancelPushButton;
    QPushButton *savePushButton;
    QPushButton *saveAllPushButton;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *loginHorizontalLayout;
    QLabel *login;
    QLineEdit *loginLineEdit;
    QHBoxLayout *passwordHorizontalLayout;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QHBoxLayout *statusHorizontalLayout;
    QLabel *statusLabel;
    QComboBox *statusComboBox;
    QHBoxLayout *moneyHorizontalLayout;
    QLabel *moneyLabel;
    QLineEdit *moneyLineEdit;
    QPushButton *revertChangesPushButton;

    void setupUi(QWidget *OwnerEditCustomersInfo)
    {
        if (OwnerEditCustomersInfo->objectName().isEmpty())
            OwnerEditCustomersInfo->setObjectName(QString::fromUtf8("OwnerEditCustomersInfo"));
        OwnerEditCustomersInfo->resize(894, 608);
        goBackToOwnerButton = new QPushButton(OwnerEditCustomersInfo);
        goBackToOwnerButton->setObjectName(QString::fromUtf8("goBackToOwnerButton"));
        goBackToOwnerButton->setGeometry(QRect(710, 20, 151, 51));
        layoutWidget = new QWidget(OwnerEditCustomersInfo);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(361, 100, 511, 491));
        customersTableInfoVerticalLayout = new QVBoxLayout(layoutWidget);
        customersTableInfoVerticalLayout->setObjectName(QString::fromUtf8("customersTableInfoVerticalLayout"));
        customersTableInfoVerticalLayout->setContentsMargins(0, 0, 0, 0);
        customersInfoTableWidget = new QTableWidget(layoutWidget);
        customersInfoTableWidget->setObjectName(QString::fromUtf8("customersInfoTableWidget"));

        customersTableInfoVerticalLayout->addWidget(customersInfoTableWidget);

        customerTableInfoHorizontalLayout = new QHBoxLayout();
        customerTableInfoHorizontalLayout->setObjectName(QString::fromUtf8("customerTableInfoHorizontalLayout"));
        addNewCustomerPushButton = new QPushButton(layoutWidget);
        addNewCustomerPushButton->setObjectName(QString::fromUtf8("addNewCustomerPushButton"));

        customerTableInfoHorizontalLayout->addWidget(addNewCustomerPushButton);

        editCustomerPushButton = new QPushButton(layoutWidget);
        editCustomerPushButton->setObjectName(QString::fromUtf8("editCustomerPushButton"));

        customerTableInfoHorizontalLayout->addWidget(editCustomerPushButton);

        deleteCustomerPushButton = new QPushButton(layoutWidget);
        deleteCustomerPushButton->setObjectName(QString::fromUtf8("deleteCustomerPushButton"));

        customerTableInfoHorizontalLayout->addWidget(deleteCustomerPushButton);


        customersTableInfoVerticalLayout->addLayout(customerTableInfoHorizontalLayout);

        layoutWidget1 = new QWidget(OwnerEditCustomersInfo);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 339, 341, 251));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        customerEditVerticalLayout = new QVBoxLayout();
        customerEditVerticalLayout->setObjectName(QString::fromUtf8("customerEditVerticalLayout"));
        totalCostHorizontalLayout = new QHBoxLayout();
        totalCostHorizontalLayout->setObjectName(QString::fromUtf8("totalCostHorizontalLayout"));
        totalCostLabel = new QLabel(layoutWidget1);
        totalCostLabel->setObjectName(QString::fromUtf8("totalCostLabel"));

        totalCostHorizontalLayout->addWidget(totalCostLabel);

        totalCostLineEdit = new QLineEdit(layoutWidget1);
        totalCostLineEdit->setObjectName(QString::fromUtf8("totalCostLineEdit"));

        totalCostHorizontalLayout->addWidget(totalCostLineEdit);


        customerEditVerticalLayout->addLayout(totalCostHorizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        customerEditVerticalLayout->addItem(verticalSpacer);

        NameHorizontalLayout = new QHBoxLayout();
        NameHorizontalLayout->setObjectName(QString::fromUtf8("NameHorizontalLayout"));
        NameLabel = new QLabel(layoutWidget1);
        NameLabel->setObjectName(QString::fromUtf8("NameLabel"));

        NameHorizontalLayout->addWidget(NameLabel);

        NameLineEdit = new QLineEdit(layoutWidget1);
        NameLineEdit->setObjectName(QString::fromUtf8("NameLineEdit"));

        NameHorizontalLayout->addWidget(NameLineEdit);


        customerEditVerticalLayout->addLayout(NameHorizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        customerEditVerticalLayout->addItem(verticalSpacer_2);

        ButtonsHorizontalLayout = new QHBoxLayout();
        ButtonsHorizontalLayout->setObjectName(QString::fromUtf8("ButtonsHorizontalLayout"));
        cancelPushButton = new QPushButton(layoutWidget1);
        cancelPushButton->setObjectName(QString::fromUtf8("cancelPushButton"));

        ButtonsHorizontalLayout->addWidget(cancelPushButton);

        savePushButton = new QPushButton(layoutWidget1);
        savePushButton->setObjectName(QString::fromUtf8("savePushButton"));

        ButtonsHorizontalLayout->addWidget(savePushButton);


        customerEditVerticalLayout->addLayout(ButtonsHorizontalLayout);


        verticalLayout->addLayout(customerEditVerticalLayout);

        saveAllPushButton = new QPushButton(layoutWidget1);
        saveAllPushButton->setObjectName(QString::fromUtf8("saveAllPushButton"));

        verticalLayout->addWidget(saveAllPushButton);

        layoutWidget2 = new QWidget(OwnerEditCustomersInfo);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 100, 341, 251));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        loginHorizontalLayout = new QHBoxLayout();
        loginHorizontalLayout->setObjectName(QString::fromUtf8("loginHorizontalLayout"));
        login = new QLabel(layoutWidget2);
        login->setObjectName(QString::fromUtf8("login"));

        loginHorizontalLayout->addWidget(login);

        loginLineEdit = new QLineEdit(layoutWidget2);
        loginLineEdit->setObjectName(QString::fromUtf8("loginLineEdit"));

        loginHorizontalLayout->addWidget(loginLineEdit);


        verticalLayout_2->addLayout(loginHorizontalLayout);

        passwordHorizontalLayout = new QHBoxLayout();
        passwordHorizontalLayout->setObjectName(QString::fromUtf8("passwordHorizontalLayout"));
        passwordLabel = new QLabel(layoutWidget2);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));

        passwordHorizontalLayout->addWidget(passwordLabel);

        passwordLineEdit = new QLineEdit(layoutWidget2);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));

        passwordHorizontalLayout->addWidget(passwordLineEdit);


        verticalLayout_2->addLayout(passwordHorizontalLayout);

        statusHorizontalLayout = new QHBoxLayout();
        statusHorizontalLayout->setObjectName(QString::fromUtf8("statusHorizontalLayout"));
        statusLabel = new QLabel(layoutWidget2);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));

        statusHorizontalLayout->addWidget(statusLabel);

        statusComboBox = new QComboBox(layoutWidget2);
        statusComboBox->setObjectName(QString::fromUtf8("statusComboBox"));

        statusHorizontalLayout->addWidget(statusComboBox);


        verticalLayout_2->addLayout(statusHorizontalLayout);

        moneyHorizontalLayout = new QHBoxLayout();
        moneyHorizontalLayout->setObjectName(QString::fromUtf8("moneyHorizontalLayout"));
        moneyLabel = new QLabel(layoutWidget2);
        moneyLabel->setObjectName(QString::fromUtf8("moneyLabel"));

        moneyHorizontalLayout->addWidget(moneyLabel);

        moneyLineEdit = new QLineEdit(layoutWidget2);
        moneyLineEdit->setObjectName(QString::fromUtf8("moneyLineEdit"));

        moneyHorizontalLayout->addWidget(moneyLineEdit);


        verticalLayout_2->addLayout(moneyHorizontalLayout);

        revertChangesPushButton = new QPushButton(OwnerEditCustomersInfo);
        revertChangesPushButton->setObjectName(QString::fromUtf8("revertChangesPushButton"));
        revertChangesPushButton->setGeometry(QRect(20, 30, 151, 41));

        retranslateUi(OwnerEditCustomersInfo);

        QMetaObject::connectSlotsByName(OwnerEditCustomersInfo);
    } // setupUi

    void retranslateUi(QWidget *OwnerEditCustomersInfo)
    {
        OwnerEditCustomersInfo->setWindowTitle(QCoreApplication::translate("OwnerEditCustomersInfo", "Form", nullptr));
        goBackToOwnerButton->setText(QCoreApplication::translate("OwnerEditCustomersInfo", "Back", nullptr));
        addNewCustomerPushButton->setText(QCoreApplication::translate("OwnerEditCustomersInfo", "Add new", nullptr));
        editCustomerPushButton->setText(QCoreApplication::translate("OwnerEditCustomersInfo", "Edit", nullptr));
        deleteCustomerPushButton->setText(QCoreApplication::translate("OwnerEditCustomersInfo", "Delete", nullptr));
        totalCostLabel->setText(QCoreApplication::translate("OwnerEditCustomersInfo", "Total Cost of Bought Products:", nullptr));
        NameLabel->setText(QCoreApplication::translate("OwnerEditCustomersInfo", "Name:", nullptr));
        cancelPushButton->setText(QCoreApplication::translate("OwnerEditCustomersInfo", "Cancel", nullptr));
        savePushButton->setText(QCoreApplication::translate("OwnerEditCustomersInfo", "Save", nullptr));
        saveAllPushButton->setText(QCoreApplication::translate("OwnerEditCustomersInfo", "Save all", nullptr));
        login->setText(QCoreApplication::translate("OwnerEditCustomersInfo", "Login:", nullptr));
        passwordLabel->setText(QCoreApplication::translate("OwnerEditCustomersInfo", "Password:", nullptr));
        statusLabel->setText(QCoreApplication::translate("OwnerEditCustomersInfo", "Status", nullptr));
        moneyLabel->setText(QCoreApplication::translate("OwnerEditCustomersInfo", "Money", nullptr));
        revertChangesPushButton->setText(QCoreApplication::translate("OwnerEditCustomersInfo", "Revert all cahnges", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OwnerEditCustomersInfo: public Ui_OwnerEditCustomersInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OWNEREDITCUSTOMERSINFO_H
