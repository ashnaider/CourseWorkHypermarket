/********************************************************************************
** Form generated from reading UI file 'ownerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWNERWINDOW_H
#define UI_OWNERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OwnerWindow
{
public:
    QPushButton *BackToMainWindowFromOwnerBtn;
    QLabel *label;
    QPushButton *toEditProdutsButton;
    QPushButton *editCustomersInfoButton;

    void setupUi(QWidget *OwnerWindow)
    {
        if (OwnerWindow->objectName().isEmpty())
            OwnerWindow->setObjectName(QString::fromUtf8("OwnerWindow"));
        OwnerWindow->resize(676, 393);
        BackToMainWindowFromOwnerBtn = new QPushButton(OwnerWindow);
        BackToMainWindowFromOwnerBtn->setObjectName(QString::fromUtf8("BackToMainWindowFromOwnerBtn"));
        BackToMainWindowFromOwnerBtn->setGeometry(QRect(490, 20, 171, 51));
        label = new QLabel(OwnerWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 20, 171, 51));
        toEditProdutsButton = new QPushButton(OwnerWindow);
        toEditProdutsButton->setObjectName(QString::fromUtf8("toEditProdutsButton"));
        toEditProdutsButton->setGeometry(QRect(110, 160, 191, 51));
        editCustomersInfoButton = new QPushButton(OwnerWindow);
        editCustomersInfoButton->setObjectName(QString::fromUtf8("editCustomersInfoButton"));
        editCustomersInfoButton->setGeometry(QRect(380, 160, 201, 51));

        retranslateUi(OwnerWindow);

        QMetaObject::connectSlotsByName(OwnerWindow);
    } // setupUi

    void retranslateUi(QWidget *OwnerWindow)
    {
        OwnerWindow->setWindowTitle(QCoreApplication::translate("OwnerWindow", "Form", nullptr));
        BackToMainWindowFromOwnerBtn->setText(QCoreApplication::translate("OwnerWindow", "back to main window", nullptr));
        label->setText(QCoreApplication::translate("OwnerWindow", "You are owner", nullptr));
        toEditProdutsButton->setText(QCoreApplication::translate("OwnerWindow", "Edit Produts", nullptr));
        editCustomersInfoButton->setText(QCoreApplication::translate("OwnerWindow", "Edit Customers Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OwnerWindow: public Ui_OwnerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OWNERWINDOW_H
