/********************************************************************************
** Form generated from reading UI file 'ownereditproduts.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWNEREDITPRODUTS_H
#define UI_OWNEREDITPRODUTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OwnerEditProduts
{
public:
    QPushButton *goBackToOwnerButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *productListTableWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *addNewPushButton;
    QPushButton *editPushButton;
    QPushButton *deletePushButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *productClassesComboBox;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *firmLabel;
    QLineEdit *firmLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *priceLabel;
    QLineEdit *priceLineEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *maxDiscountLabel;
    QLineEdit *maxDiscountLineEdit;
    QHBoxLayout *horizontalLayout_10;
    QLabel *contractLabel;
    QRadioButton *contractRadioButton;
    QHBoxLayout *horizontalLayout_8;
    QLabel *maxSimCardsLabel;
    QSpinBox *maxSimCardsSpinBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *osLabel;
    QComboBox *osComboBox;
    QHBoxLayout *horizontalLayout_9;
    QLabel *programmsLabel;
    QLineEdit *programmsLineEdit;
    QHBoxLayout *horizontalLayout_11;
    QLabel *DiagonalSizeLabel;
    QComboBox *diagonalSizeComboBox;
    QHBoxLayout *horizontalLayout_12;
    QLabel *weightLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *horizontalLayout_13;
    QLabel *cpuCoresLabel;
    QLineEdit *cpuCoresLineEdit;
    QHBoxLayout *horizontalLayout_14;
    QLabel *mainMemoryLabel;
    QLineEdit *mainMemoryLineEdit;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *cancelPushButton;
    QPushButton *savePushButton;
    QSpacerItem *verticalSpacer;
    QPushButton *saveAllpushButton;
    QPushButton *revertChangesPushButton;

    void setupUi(QWidget *OwnerEditProduts)
    {
        if (OwnerEditProduts->objectName().isEmpty())
            OwnerEditProduts->setObjectName(QString::fromUtf8("OwnerEditProduts"));
        OwnerEditProduts->resize(841, 669);
        goBackToOwnerButton = new QPushButton(OwnerEditProduts);
        goBackToOwnerButton->setObjectName(QString::fromUtf8("goBackToOwnerButton"));
        goBackToOwnerButton->setGeometry(QRect(610, 30, 161, 51));
        layoutWidget = new QWidget(OwnerEditProduts);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(290, 110, 531, 511));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        productListTableWidget = new QTableWidget(layoutWidget);
        productListTableWidget->setObjectName(QString::fromUtf8("productListTableWidget"));

        verticalLayout->addWidget(productListTableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addNewPushButton = new QPushButton(layoutWidget);
        addNewPushButton->setObjectName(QString::fromUtf8("addNewPushButton"));

        horizontalLayout->addWidget(addNewPushButton);

        editPushButton = new QPushButton(layoutWidget);
        editPushButton->setObjectName(QString::fromUtf8("editPushButton"));

        horizontalLayout->addWidget(editPushButton);

        deletePushButton = new QPushButton(layoutWidget);
        deletePushButton->setObjectName(QString::fromUtf8("deletePushButton"));

        horizontalLayout->addWidget(deletePushButton);


        verticalLayout->addLayout(horizontalLayout);

        layoutWidget1 = new QWidget(OwnerEditProduts);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(290, 30, 191, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        productClassesComboBox = new QComboBox(layoutWidget1);
        productClassesComboBox->setObjectName(QString::fromUtf8("productClassesComboBox"));

        horizontalLayout_2->addWidget(productClassesComboBox);

        layoutWidget2 = new QWidget(OwnerEditProduts);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 110, 261, 511));
        verticalLayout_4 = new QVBoxLayout(layoutWidget2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        firmLabel = new QLabel(layoutWidget2);
        firmLabel->setObjectName(QString::fromUtf8("firmLabel"));

        horizontalLayout_3->addWidget(firmLabel);

        firmLineEdit = new QLineEdit(layoutWidget2);
        firmLineEdit->setObjectName(QString::fromUtf8("firmLineEdit"));

        horizontalLayout_3->addWidget(firmLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        nameLabel = new QLabel(layoutWidget2);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        horizontalLayout_4->addWidget(nameLabel);

        nameLineEdit = new QLineEdit(layoutWidget2);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

        horizontalLayout_4->addWidget(nameLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        priceLabel = new QLabel(layoutWidget2);
        priceLabel->setObjectName(QString::fromUtf8("priceLabel"));

        horizontalLayout_5->addWidget(priceLabel);

        priceLineEdit = new QLineEdit(layoutWidget2);
        priceLineEdit->setObjectName(QString::fromUtf8("priceLineEdit"));

        horizontalLayout_5->addWidget(priceLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        maxDiscountLabel = new QLabel(layoutWidget2);
        maxDiscountLabel->setObjectName(QString::fromUtf8("maxDiscountLabel"));

        horizontalLayout_6->addWidget(maxDiscountLabel);

        maxDiscountLineEdit = new QLineEdit(layoutWidget2);
        maxDiscountLineEdit->setObjectName(QString::fromUtf8("maxDiscountLineEdit"));

        horizontalLayout_6->addWidget(maxDiscountLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        contractLabel = new QLabel(layoutWidget2);
        contractLabel->setObjectName(QString::fromUtf8("contractLabel"));

        horizontalLayout_10->addWidget(contractLabel);

        contractRadioButton = new QRadioButton(layoutWidget2);
        contractRadioButton->setObjectName(QString::fromUtf8("contractRadioButton"));

        horizontalLayout_10->addWidget(contractRadioButton);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        maxSimCardsLabel = new QLabel(layoutWidget2);
        maxSimCardsLabel->setObjectName(QString::fromUtf8("maxSimCardsLabel"));

        horizontalLayout_8->addWidget(maxSimCardsLabel);

        maxSimCardsSpinBox = new QSpinBox(layoutWidget2);
        maxSimCardsSpinBox->setObjectName(QString::fromUtf8("maxSimCardsSpinBox"));

        horizontalLayout_8->addWidget(maxSimCardsSpinBox);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        osLabel = new QLabel(layoutWidget2);
        osLabel->setObjectName(QString::fromUtf8("osLabel"));

        horizontalLayout_7->addWidget(osLabel);

        osComboBox = new QComboBox(layoutWidget2);
        osComboBox->addItem(QString());
        osComboBox->addItem(QString());
        osComboBox->addItem(QString());
        osComboBox->addItem(QString());
        osComboBox->setObjectName(QString::fromUtf8("osComboBox"));

        horizontalLayout_7->addWidget(osComboBox);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        programmsLabel = new QLabel(layoutWidget2);
        programmsLabel->setObjectName(QString::fromUtf8("programmsLabel"));

        horizontalLayout_9->addWidget(programmsLabel);

        programmsLineEdit = new QLineEdit(layoutWidget2);
        programmsLineEdit->setObjectName(QString::fromUtf8("programmsLineEdit"));

        horizontalLayout_9->addWidget(programmsLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        DiagonalSizeLabel = new QLabel(layoutWidget2);
        DiagonalSizeLabel->setObjectName(QString::fromUtf8("DiagonalSizeLabel"));

        horizontalLayout_11->addWidget(DiagonalSizeLabel);

        diagonalSizeComboBox = new QComboBox(layoutWidget2);
        diagonalSizeComboBox->addItem(QString());
        diagonalSizeComboBox->addItem(QString());
        diagonalSizeComboBox->addItem(QString());
        diagonalSizeComboBox->addItem(QString());
        diagonalSizeComboBox->addItem(QString());
        diagonalSizeComboBox->addItem(QString());
        diagonalSizeComboBox->addItem(QString());
        diagonalSizeComboBox->addItem(QString());
        diagonalSizeComboBox->addItem(QString());
        diagonalSizeComboBox->setObjectName(QString::fromUtf8("diagonalSizeComboBox"));

        horizontalLayout_11->addWidget(diagonalSizeComboBox);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        weightLabel = new QLabel(layoutWidget2);
        weightLabel->setObjectName(QString::fromUtf8("weightLabel"));

        horizontalLayout_12->addWidget(weightLabel);

        weightLineEdit = new QLineEdit(layoutWidget2);
        weightLineEdit->setObjectName(QString::fromUtf8("weightLineEdit"));

        horizontalLayout_12->addWidget(weightLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        cpuCoresLabel = new QLabel(layoutWidget2);
        cpuCoresLabel->setObjectName(QString::fromUtf8("cpuCoresLabel"));

        horizontalLayout_13->addWidget(cpuCoresLabel);

        cpuCoresLineEdit = new QLineEdit(layoutWidget2);
        cpuCoresLineEdit->setObjectName(QString::fromUtf8("cpuCoresLineEdit"));

        horizontalLayout_13->addWidget(cpuCoresLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        mainMemoryLabel = new QLabel(layoutWidget2);
        mainMemoryLabel->setObjectName(QString::fromUtf8("mainMemoryLabel"));

        horizontalLayout_14->addWidget(mainMemoryLabel);

        mainMemoryLineEdit = new QLineEdit(layoutWidget2);
        mainMemoryLineEdit->setObjectName(QString::fromUtf8("mainMemoryLineEdit"));

        horizontalLayout_14->addWidget(mainMemoryLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_14);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        cancelPushButton = new QPushButton(layoutWidget2);
        cancelPushButton->setObjectName(QString::fromUtf8("cancelPushButton"));

        horizontalLayout_15->addWidget(cancelPushButton);

        savePushButton = new QPushButton(layoutWidget2);
        savePushButton->setObjectName(QString::fromUtf8("savePushButton"));

        horizontalLayout_15->addWidget(savePushButton);


        verticalLayout_2->addLayout(horizontalLayout_15);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        saveAllpushButton = new QPushButton(layoutWidget2);
        saveAllpushButton->setObjectName(QString::fromUtf8("saveAllpushButton"));

        verticalLayout_2->addWidget(saveAllpushButton);


        verticalLayout_4->addLayout(verticalLayout_2);

        revertChangesPushButton = new QPushButton(OwnerEditProduts);
        revertChangesPushButton->setObjectName(QString::fromUtf8("revertChangesPushButton"));
        revertChangesPushButton->setGeometry(QRect(40, 40, 141, 31));

        retranslateUi(OwnerEditProduts);

        QMetaObject::connectSlotsByName(OwnerEditProduts);
    } // setupUi

    void retranslateUi(QWidget *OwnerEditProduts)
    {
        OwnerEditProduts->setWindowTitle(QCoreApplication::translate("OwnerEditProduts", "Form", nullptr));
        goBackToOwnerButton->setText(QCoreApplication::translate("OwnerEditProduts", "back", nullptr));
        addNewPushButton->setText(QCoreApplication::translate("OwnerEditProduts", "Add new", nullptr));
        editPushButton->setText(QCoreApplication::translate("OwnerEditProduts", "Edit", nullptr));
        deletePushButton->setText(QCoreApplication::translate("OwnerEditProduts", "Delete", nullptr));
        label->setText(QCoreApplication::translate("OwnerEditProduts", "Edit", nullptr));
        firmLabel->setText(QCoreApplication::translate("OwnerEditProduts", "Firm:", nullptr));
        nameLabel->setText(QCoreApplication::translate("OwnerEditProduts", "Name:", nullptr));
        priceLabel->setText(QCoreApplication::translate("OwnerEditProduts", "Price:", nullptr));
        maxDiscountLabel->setText(QCoreApplication::translate("OwnerEditProduts", "Max discount in %:", nullptr));
        contractLabel->setText(QCoreApplication::translate("OwnerEditProduts", "Contract:", nullptr));
        contractRadioButton->setText(QCoreApplication::translate("OwnerEditProduts", "has contract", nullptr));
        maxSimCardsLabel->setText(QCoreApplication::translate("OwnerEditProduts", "Max SIM cards:", nullptr));
        osLabel->setText(QCoreApplication::translate("OwnerEditProduts", "Operating System:", nullptr));
        osComboBox->setItemText(0, QCoreApplication::translate("OwnerEditProduts", "Android", nullptr));
        osComboBox->setItemText(1, QCoreApplication::translate("OwnerEditProduts", "IOS", nullptr));
        osComboBox->setItemText(2, QCoreApplication::translate("OwnerEditProduts", "Windows Phone", nullptr));
        osComboBox->setItemText(3, QCoreApplication::translate("OwnerEditProduts", "Blackberry", nullptr));

        programmsLabel->setText(QCoreApplication::translate("OwnerEditProduts", "Programms:", nullptr));
        DiagonalSizeLabel->setText(QCoreApplication::translate("OwnerEditProduts", "Diagonal size:", nullptr));
        diagonalSizeComboBox->setItemText(0, QCoreApplication::translate("OwnerEditProduts", "9", nullptr));
        diagonalSizeComboBox->setItemText(1, QCoreApplication::translate("OwnerEditProduts", "10", nullptr));
        diagonalSizeComboBox->setItemText(2, QCoreApplication::translate("OwnerEditProduts", "12.5", nullptr));
        diagonalSizeComboBox->setItemText(3, QCoreApplication::translate("OwnerEditProduts", "13", nullptr));
        diagonalSizeComboBox->setItemText(4, QCoreApplication::translate("OwnerEditProduts", "14", nullptr));
        diagonalSizeComboBox->setItemText(5, QCoreApplication::translate("OwnerEditProduts", "15", nullptr));
        diagonalSizeComboBox->setItemText(6, QCoreApplication::translate("OwnerEditProduts", "15.6", nullptr));
        diagonalSizeComboBox->setItemText(7, QCoreApplication::translate("OwnerEditProduts", "16", nullptr));
        diagonalSizeComboBox->setItemText(8, QCoreApplication::translate("OwnerEditProduts", "17", nullptr));

        diagonalSizeComboBox->setCurrentText(QCoreApplication::translate("OwnerEditProduts", "9", nullptr));
        weightLabel->setText(QCoreApplication::translate("OwnerEditProduts", "Weight:", nullptr));
        cpuCoresLabel->setText(QCoreApplication::translate("OwnerEditProduts", "CPU cores:", nullptr));
        mainMemoryLabel->setText(QCoreApplication::translate("OwnerEditProduts", "Main memory:", nullptr));
        cancelPushButton->setText(QCoreApplication::translate("OwnerEditProduts", "Cancel", nullptr));
        savePushButton->setText(QCoreApplication::translate("OwnerEditProduts", "Save", nullptr));
        saveAllpushButton->setText(QCoreApplication::translate("OwnerEditProduts", "Save all", nullptr));
        revertChangesPushButton->setText(QCoreApplication::translate("OwnerEditProduts", "Revert all changes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OwnerEditProduts: public Ui_OwnerEditProduts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OWNEREDITPRODUTS_H
