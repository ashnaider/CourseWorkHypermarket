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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OwnerEditProduts
{
public:
    QPushButton *goBackToOwnerButton;
    QLabel *label;

    void setupUi(QWidget *OwnerEditProduts)
    {
        if (OwnerEditProduts->objectName().isEmpty())
            OwnerEditProduts->setObjectName(QStringLiteral("OwnerEditProduts"));
        OwnerEditProduts->resize(642, 454);
        goBackToOwnerButton = new QPushButton(OwnerEditProduts);
        goBackToOwnerButton->setObjectName(QStringLiteral("goBackToOwnerButton"));
        goBackToOwnerButton->setGeometry(QRect(460, 30, 161, 51));
        label = new QLabel(OwnerEditProduts);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 200, 191, 61));

        retranslateUi(OwnerEditProduts);

        QMetaObject::connectSlotsByName(OwnerEditProduts);
    } // setupUi

    void retranslateUi(QWidget *OwnerEditProduts)
    {
        OwnerEditProduts->setWindowTitle(QApplication::translate("OwnerEditProduts", "Form", Q_NULLPTR));
        goBackToOwnerButton->setText(QApplication::translate("OwnerEditProduts", "back", Q_NULLPTR));
        label->setText(QApplication::translate("OwnerEditProduts", "You are editing produts", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OwnerEditProduts: public Ui_OwnerEditProduts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OWNEREDITPRODUTS_H
