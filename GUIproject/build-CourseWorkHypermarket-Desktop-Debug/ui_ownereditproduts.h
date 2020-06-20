/********************************************************************************
** Form generated from reading UI file 'ownereditproduts.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWNEREDITPRODUTS_H
#define UI_OWNEREDITPRODUTS_H

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
            OwnerEditProduts->setObjectName(QStringLiteral("OwnerEditProduts"));
        OwnerEditProduts->resize(841, 669);
        goBackToOwnerButton = new QPushButton(OwnerEditProduts);
        goBackToOwnerButton->setObjectName(QStringLiteral("goBackToOwnerButton"));
        goBackToOwnerButton->setGeometry(QRect(610, 30, 161, 51));
        layoutWidget = new QWidget(OwnerEditProduts);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(290, 110, 531, 511));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        productListTableWidget = new QTableWidget(layoutWidget);
        productListTableWidget->setObjectName(QStringLiteral("productListTableWidget"));

        verticalLayout->addWidget(productListTableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addNewPushButton = new QPushButton(layoutWidget);
        addNewPushButton->setObjectName(QStringLiteral("addNewPushButton"));

        horizontalLayout->addWidget(addNewPushButton);

        editPushButton = new QPushButton(layoutWidget);
        editPushButton->setObjectName(QStringLiteral("editPushButton"));

        horizontalLayout->addWidget(editPushButton);

        deletePushButton = new QPushButton(layoutWidget);
        deletePushButton->setObjectName(QStringLiteral("deletePushButton"));

        horizontalLayout->addWidget(deletePushButton);


        verticalLayout->addLayout(horizontalLayout);

        layoutWidget1 = new QWidget(OwnerEditProduts);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(290, 30, 191, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        productClassesComboBox = new QComboBox(layoutWidget1);
        productClassesComboBox->setObjectName(QStringLiteral("productClassesComboBox"));

        horizontalLayout_2->addWidget(productClassesComboBox);

        layoutWidget2 = new QWidget(OwnerEditProduts);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 110, 261, 511));
        verticalLayout_4 = new QVBoxLayout(layoutWidget2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        firmLabel = new QLabel(layoutWidget2);
        firmLabel->setObjectName(QStringLiteral("firmLabel"));

        horizontalLayout_3->addWidget(firmLabel);

        firmLineEdit = new QLineEdit(layoutWidget2);
        firmLineEdit->setObjectName(QStringLiteral("firmLineEdit"));

        horizontalLayout_3->addWidget(firmLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        nameLabel = new QLabel(layoutWidget2);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        horizontalLayout_4->addWidget(nameLabel);

        nameLineEdit = new QLineEdit(layoutWidget2);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        horizontalLayout_4->addWidget(nameLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        priceLabel = new QLabel(layoutWidget2);
        priceLabel->setObjectName(QStringLiteral("priceLabel"));

        horizontalLayout_5->addWidget(priceLabel);

        priceLineEdit = new QLineEdit(layoutWidget2);
        priceLineEdit->setObjectName(QStringLiteral("priceLineEdit"));

        horizontalLayout_5->addWidget(priceLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        maxDiscountLabel = new QLabel(layoutWidget2);
        maxDiscountLabel->setObjectName(QStringLiteral("maxDiscountLabel"));

        horizontalLayout_6->addWidget(maxDiscountLabel);

        maxDiscountLineEdit = new QLineEdit(layoutWidget2);
        maxDiscountLineEdit->setObjectName(QStringLiteral("maxDiscountLineEdit"));

        horizontalLayout_6->addWidget(maxDiscountLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        contractLabel = new QLabel(layoutWidget2);
        contractLabel->setObjectName(QStringLiteral("contractLabel"));

        horizontalLayout_10->addWidget(contractLabel);

        contractRadioButton = new QRadioButton(layoutWidget2);
        contractRadioButton->setObjectName(QStringLiteral("contractRadioButton"));

        horizontalLayout_10->addWidget(contractRadioButton);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        maxSimCardsLabel = new QLabel(layoutWidget2);
        maxSimCardsLabel->setObjectName(QStringLiteral("maxSimCardsLabel"));

        horizontalLayout_8->addWidget(maxSimCardsLabel);

        maxSimCardsSpinBox = new QSpinBox(layoutWidget2);
        maxSimCardsSpinBox->setObjectName(QStringLiteral("maxSimCardsSpinBox"));

        horizontalLayout_8->addWidget(maxSimCardsSpinBox);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        osLabel = new QLabel(layoutWidget2);
        osLabel->setObjectName(QStringLiteral("osLabel"));

        horizontalLayout_7->addWidget(osLabel);

        osComboBox = new QComboBox(layoutWidget2);
        osComboBox->setObjectName(QStringLiteral("osComboBox"));

        horizontalLayout_7->addWidget(osComboBox);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        programmsLabel = new QLabel(layoutWidget2);
        programmsLabel->setObjectName(QStringLiteral("programmsLabel"));

        horizontalLayout_9->addWidget(programmsLabel);

        programmsLineEdit = new QLineEdit(layoutWidget2);
        programmsLineEdit->setObjectName(QStringLiteral("programmsLineEdit"));

        horizontalLayout_9->addWidget(programmsLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        DiagonalSizeLabel = new QLabel(layoutWidget2);
        DiagonalSizeLabel->setObjectName(QStringLiteral("DiagonalSizeLabel"));

        horizontalLayout_11->addWidget(DiagonalSizeLabel);

        diagonalSizeComboBox = new QComboBox(layoutWidget2);
        diagonalSizeComboBox->setObjectName(QStringLiteral("diagonalSizeComboBox"));

        horizontalLayout_11->addWidget(diagonalSizeComboBox);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        weightLabel = new QLabel(layoutWidget2);
        weightLabel->setObjectName(QStringLiteral("weightLabel"));

        horizontalLayout_12->addWidget(weightLabel);

        weightLineEdit = new QLineEdit(layoutWidget2);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));

        horizontalLayout_12->addWidget(weightLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        cpuCoresLabel = new QLabel(layoutWidget2);
        cpuCoresLabel->setObjectName(QStringLiteral("cpuCoresLabel"));

        horizontalLayout_13->addWidget(cpuCoresLabel);

        cpuCoresLineEdit = new QLineEdit(layoutWidget2);
        cpuCoresLineEdit->setObjectName(QStringLiteral("cpuCoresLineEdit"));

        horizontalLayout_13->addWidget(cpuCoresLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        mainMemoryLabel = new QLabel(layoutWidget2);
        mainMemoryLabel->setObjectName(QStringLiteral("mainMemoryLabel"));

        horizontalLayout_14->addWidget(mainMemoryLabel);

        mainMemoryLineEdit = new QLineEdit(layoutWidget2);
        mainMemoryLineEdit->setObjectName(QStringLiteral("mainMemoryLineEdit"));

        horizontalLayout_14->addWidget(mainMemoryLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_14);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        cancelPushButton = new QPushButton(layoutWidget2);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout_15->addWidget(cancelPushButton);

        savePushButton = new QPushButton(layoutWidget2);
        savePushButton->setObjectName(QStringLiteral("savePushButton"));

        horizontalLayout_15->addWidget(savePushButton);


        verticalLayout_2->addLayout(horizontalLayout_15);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        saveAllpushButton = new QPushButton(layoutWidget2);
        saveAllpushButton->setObjectName(QStringLiteral("saveAllpushButton"));

        verticalLayout_2->addWidget(saveAllpushButton);


        verticalLayout_4->addLayout(verticalLayout_2);

        revertChangesPushButton = new QPushButton(OwnerEditProduts);
        revertChangesPushButton->setObjectName(QStringLiteral("revertChangesPushButton"));
        revertChangesPushButton->setGeometry(QRect(40, 40, 141, 31));

        retranslateUi(OwnerEditProduts);

        QMetaObject::connectSlotsByName(OwnerEditProduts);
    } // setupUi

    void retranslateUi(QWidget *OwnerEditProduts)
    {
        OwnerEditProduts->setWindowTitle(QApplication::translate("OwnerEditProduts", "Form", Q_NULLPTR));
        goBackToOwnerButton->setText(QApplication::translate("OwnerEditProduts", "back", Q_NULLPTR));
        addNewPushButton->setText(QApplication::translate("OwnerEditProduts", "Add new", Q_NULLPTR));
        editPushButton->setText(QApplication::translate("OwnerEditProduts", "Edit", Q_NULLPTR));
        deletePushButton->setText(QApplication::translate("OwnerEditProduts", "Delete", Q_NULLPTR));
        label->setText(QApplication::translate("OwnerEditProduts", "Edit", Q_NULLPTR));
        firmLabel->setText(QApplication::translate("OwnerEditProduts", "Firm:", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("OwnerEditProduts", "Name:", Q_NULLPTR));
        priceLabel->setText(QApplication::translate("OwnerEditProduts", "Price:", Q_NULLPTR));
        maxDiscountLabel->setText(QApplication::translate("OwnerEditProduts", "Max discount in %:", Q_NULLPTR));
        contractLabel->setText(QApplication::translate("OwnerEditProduts", "Contract:", Q_NULLPTR));
        contractRadioButton->setText(QApplication::translate("OwnerEditProduts", "has contract", Q_NULLPTR));
        maxSimCardsLabel->setText(QApplication::translate("OwnerEditProduts", "Max SIM cards:", Q_NULLPTR));
        osLabel->setText(QApplication::translate("OwnerEditProduts", "Operating System:", Q_NULLPTR));
        osComboBox->clear();
        osComboBox->insertItems(0, QStringList()
         << QApplication::translate("OwnerEditProduts", "Android", Q_NULLPTR)
         << QApplication::translate("OwnerEditProduts", "IOS", Q_NULLPTR)
         << QApplication::translate("OwnerEditProduts", "Windows Phone", Q_NULLPTR)
         << QApplication::translate("OwnerEditProduts", "Blackberry", Q_NULLPTR)
        );
        programmsLabel->setText(QApplication::translate("OwnerEditProduts", "Programms:", Q_NULLPTR));
        DiagonalSizeLabel->setText(QApplication::translate("OwnerEditProduts", "Diagonal size:", Q_NULLPTR));
        diagonalSizeComboBox->clear();
        diagonalSizeComboBox->insertItems(0, QStringList()
         << QApplication::translate("OwnerEditProduts", "9", Q_NULLPTR)
         << QApplication::translate("OwnerEditProduts", "10", Q_NULLPTR)
         << QApplication::translate("OwnerEditProduts", "12.5", Q_NULLPTR)
         << QApplication::translate("OwnerEditProduts", "13", Q_NULLPTR)
         << QApplication::translate("OwnerEditProduts", "14", Q_NULLPTR)
         << QApplication::translate("OwnerEditProduts", "15", Q_NULLPTR)
         << QApplication::translate("OwnerEditProduts", "15.6", Q_NULLPTR)
         << QApplication::translate("OwnerEditProduts", "16", Q_NULLPTR)
         << QApplication::translate("OwnerEditProduts", "17", Q_NULLPTR)
        );
        diagonalSizeComboBox->setCurrentText(QApplication::translate("OwnerEditProduts", "9", Q_NULLPTR));
        weightLabel->setText(QApplication::translate("OwnerEditProduts", "Weight:", Q_NULLPTR));
        cpuCoresLabel->setText(QApplication::translate("OwnerEditProduts", "CPU cores:", Q_NULLPTR));
        mainMemoryLabel->setText(QApplication::translate("OwnerEditProduts", "Main memory:", Q_NULLPTR));
        cancelPushButton->setText(QApplication::translate("OwnerEditProduts", "Cancel", Q_NULLPTR));
        savePushButton->setText(QApplication::translate("OwnerEditProduts", "Save", Q_NULLPTR));
        saveAllpushButton->setText(QApplication::translate("OwnerEditProduts", "Save all", Q_NULLPTR));
        revertChangesPushButton->setText(QApplication::translate("OwnerEditProduts", "Revert all changes", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OwnerEditProduts: public Ui_OwnerEditProduts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OWNEREDITPRODUTS_H
