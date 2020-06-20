/********************************************************************************
** Form generated from reading UI file 'ownereditcustomersinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWNEREDITCUSTOMERSINFO_H
#define UI_OWNEREDITCUSTOMERSINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
            OwnerEditCustomersInfo->setObjectName(QStringLiteral("OwnerEditCustomersInfo"));
        OwnerEditCustomersInfo->resize(894, 608);
        goBackToOwnerButton = new QPushButton(OwnerEditCustomersInfo);
        goBackToOwnerButton->setObjectName(QStringLiteral("goBackToOwnerButton"));
        goBackToOwnerButton->setGeometry(QRect(710, 20, 151, 51));
        layoutWidget = new QWidget(OwnerEditCustomersInfo);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(361, 100, 511, 491));
        customersTableInfoVerticalLayout = new QVBoxLayout(layoutWidget);
        customersTableInfoVerticalLayout->setObjectName(QStringLiteral("customersTableInfoVerticalLayout"));
        customersTableInfoVerticalLayout->setContentsMargins(0, 0, 0, 0);
        customersInfoTableWidget = new QTableWidget(layoutWidget);
        customersInfoTableWidget->setObjectName(QStringLiteral("customersInfoTableWidget"));

        customersTableInfoVerticalLayout->addWidget(customersInfoTableWidget);

        customerTableInfoHorizontalLayout = new QHBoxLayout();
        customerTableInfoHorizontalLayout->setObjectName(QStringLiteral("customerTableInfoHorizontalLayout"));
        addNewCustomerPushButton = new QPushButton(layoutWidget);
        addNewCustomerPushButton->setObjectName(QStringLiteral("addNewCustomerPushButton"));

        customerTableInfoHorizontalLayout->addWidget(addNewCustomerPushButton);

        editCustomerPushButton = new QPushButton(layoutWidget);
        editCustomerPushButton->setObjectName(QStringLiteral("editCustomerPushButton"));

        customerTableInfoHorizontalLayout->addWidget(editCustomerPushButton);

        deleteCustomerPushButton = new QPushButton(layoutWidget);
        deleteCustomerPushButton->setObjectName(QStringLiteral("deleteCustomerPushButton"));

        customerTableInfoHorizontalLayout->addWidget(deleteCustomerPushButton);


        customersTableInfoVerticalLayout->addLayout(customerTableInfoHorizontalLayout);

        layoutWidget1 = new QWidget(OwnerEditCustomersInfo);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 339, 341, 251));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        customerEditVerticalLayout = new QVBoxLayout();
        customerEditVerticalLayout->setObjectName(QStringLiteral("customerEditVerticalLayout"));
        totalCostHorizontalLayout = new QHBoxLayout();
        totalCostHorizontalLayout->setObjectName(QStringLiteral("totalCostHorizontalLayout"));
        totalCostLabel = new QLabel(layoutWidget1);
        totalCostLabel->setObjectName(QStringLiteral("totalCostLabel"));

        totalCostHorizontalLayout->addWidget(totalCostLabel);

        totalCostLineEdit = new QLineEdit(layoutWidget1);
        totalCostLineEdit->setObjectName(QStringLiteral("totalCostLineEdit"));

        totalCostHorizontalLayout->addWidget(totalCostLineEdit);


        customerEditVerticalLayout->addLayout(totalCostHorizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        customerEditVerticalLayout->addItem(verticalSpacer);

        NameHorizontalLayout = new QHBoxLayout();
        NameHorizontalLayout->setObjectName(QStringLiteral("NameHorizontalLayout"));
        NameLabel = new QLabel(layoutWidget1);
        NameLabel->setObjectName(QStringLiteral("NameLabel"));

        NameHorizontalLayout->addWidget(NameLabel);

        NameLineEdit = new QLineEdit(layoutWidget1);
        NameLineEdit->setObjectName(QStringLiteral("NameLineEdit"));

        NameHorizontalLayout->addWidget(NameLineEdit);


        customerEditVerticalLayout->addLayout(NameHorizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        customerEditVerticalLayout->addItem(verticalSpacer_2);

        ButtonsHorizontalLayout = new QHBoxLayout();
        ButtonsHorizontalLayout->setObjectName(QStringLiteral("ButtonsHorizontalLayout"));
        cancelPushButton = new QPushButton(layoutWidget1);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        ButtonsHorizontalLayout->addWidget(cancelPushButton);

        savePushButton = new QPushButton(layoutWidget1);
        savePushButton->setObjectName(QStringLiteral("savePushButton"));

        ButtonsHorizontalLayout->addWidget(savePushButton);


        customerEditVerticalLayout->addLayout(ButtonsHorizontalLayout);


        verticalLayout->addLayout(customerEditVerticalLayout);

        saveAllPushButton = new QPushButton(layoutWidget1);
        saveAllPushButton->setObjectName(QStringLiteral("saveAllPushButton"));

        verticalLayout->addWidget(saveAllPushButton);

        layoutWidget2 = new QWidget(OwnerEditCustomersInfo);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 100, 341, 251));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        loginHorizontalLayout = new QHBoxLayout();
        loginHorizontalLayout->setObjectName(QStringLiteral("loginHorizontalLayout"));
        login = new QLabel(layoutWidget2);
        login->setObjectName(QStringLiteral("login"));

        loginHorizontalLayout->addWidget(login);

        loginLineEdit = new QLineEdit(layoutWidget2);
        loginLineEdit->setObjectName(QStringLiteral("loginLineEdit"));

        loginHorizontalLayout->addWidget(loginLineEdit);


        verticalLayout_2->addLayout(loginHorizontalLayout);

        passwordHorizontalLayout = new QHBoxLayout();
        passwordHorizontalLayout->setObjectName(QStringLiteral("passwordHorizontalLayout"));
        passwordLabel = new QLabel(layoutWidget2);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));

        passwordHorizontalLayout->addWidget(passwordLabel);

        passwordLineEdit = new QLineEdit(layoutWidget2);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));

        passwordHorizontalLayout->addWidget(passwordLineEdit);


        verticalLayout_2->addLayout(passwordHorizontalLayout);

        statusHorizontalLayout = new QHBoxLayout();
        statusHorizontalLayout->setObjectName(QStringLiteral("statusHorizontalLayout"));
        statusLabel = new QLabel(layoutWidget2);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));

        statusHorizontalLayout->addWidget(statusLabel);

        statusComboBox = new QComboBox(layoutWidget2);
        statusComboBox->setObjectName(QStringLiteral("statusComboBox"));

        statusHorizontalLayout->addWidget(statusComboBox);


        verticalLayout_2->addLayout(statusHorizontalLayout);

        moneyHorizontalLayout = new QHBoxLayout();
        moneyHorizontalLayout->setObjectName(QStringLiteral("moneyHorizontalLayout"));
        moneyLabel = new QLabel(layoutWidget2);
        moneyLabel->setObjectName(QStringLiteral("moneyLabel"));

        moneyHorizontalLayout->addWidget(moneyLabel);

        moneyLineEdit = new QLineEdit(layoutWidget2);
        moneyLineEdit->setObjectName(QStringLiteral("moneyLineEdit"));

        moneyHorizontalLayout->addWidget(moneyLineEdit);


        verticalLayout_2->addLayout(moneyHorizontalLayout);

        revertChangesPushButton = new QPushButton(OwnerEditCustomersInfo);
        revertChangesPushButton->setObjectName(QStringLiteral("revertChangesPushButton"));
        revertChangesPushButton->setGeometry(QRect(20, 30, 151, 41));

        retranslateUi(OwnerEditCustomersInfo);

        QMetaObject::connectSlotsByName(OwnerEditCustomersInfo);
    } // setupUi

    void retranslateUi(QWidget *OwnerEditCustomersInfo)
    {
        OwnerEditCustomersInfo->setWindowTitle(QApplication::translate("OwnerEditCustomersInfo", "Form", Q_NULLPTR));
        goBackToOwnerButton->setText(QApplication::translate("OwnerEditCustomersInfo", "Back", Q_NULLPTR));
        addNewCustomerPushButton->setText(QApplication::translate("OwnerEditCustomersInfo", "Add new", Q_NULLPTR));
        editCustomerPushButton->setText(QApplication::translate("OwnerEditCustomersInfo", "Edit", Q_NULLPTR));
        deleteCustomerPushButton->setText(QApplication::translate("OwnerEditCustomersInfo", "Delete", Q_NULLPTR));
        totalCostLabel->setText(QApplication::translate("OwnerEditCustomersInfo", "Total Cost of Bought Products:", Q_NULLPTR));
        NameLabel->setText(QApplication::translate("OwnerEditCustomersInfo", "Name:", Q_NULLPTR));
        cancelPushButton->setText(QApplication::translate("OwnerEditCustomersInfo", "Cancel", Q_NULLPTR));
        savePushButton->setText(QApplication::translate("OwnerEditCustomersInfo", "Save", Q_NULLPTR));
        saveAllPushButton->setText(QApplication::translate("OwnerEditCustomersInfo", "Save all", Q_NULLPTR));
        login->setText(QApplication::translate("OwnerEditCustomersInfo", "Login:", Q_NULLPTR));
        passwordLabel->setText(QApplication::translate("OwnerEditCustomersInfo", "Password:", Q_NULLPTR));
        statusLabel->setText(QApplication::translate("OwnerEditCustomersInfo", "Status", Q_NULLPTR));
        moneyLabel->setText(QApplication::translate("OwnerEditCustomersInfo", "Money", Q_NULLPTR));
        revertChangesPushButton->setText(QApplication::translate("OwnerEditCustomersInfo", "Revert all cahnges", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OwnerEditCustomersInfo: public Ui_OwnerEditCustomersInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OWNEREDITCUSTOMERSINFO_H
