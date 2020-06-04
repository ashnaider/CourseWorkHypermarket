/********************************************************************************
** Form generated from reading UI file 'ownerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWNERWINDOW_H
#define UI_OWNERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
            OwnerWindow->setObjectName(QStringLiteral("OwnerWindow"));
        OwnerWindow->resize(676, 393);
        BackToMainWindowFromOwnerBtn = new QPushButton(OwnerWindow);
        BackToMainWindowFromOwnerBtn->setObjectName(QStringLiteral("BackToMainWindowFromOwnerBtn"));
        BackToMainWindowFromOwnerBtn->setGeometry(QRect(490, 20, 171, 51));
        label = new QLabel(OwnerWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 20, 171, 51));
        toEditProdutsButton = new QPushButton(OwnerWindow);
        toEditProdutsButton->setObjectName(QStringLiteral("toEditProdutsButton"));
        toEditProdutsButton->setGeometry(QRect(110, 160, 191, 51));
        editCustomersInfoButton = new QPushButton(OwnerWindow);
        editCustomersInfoButton->setObjectName(QStringLiteral("editCustomersInfoButton"));
        editCustomersInfoButton->setGeometry(QRect(380, 160, 201, 51));

        retranslateUi(OwnerWindow);

        QMetaObject::connectSlotsByName(OwnerWindow);
    } // setupUi

    void retranslateUi(QWidget *OwnerWindow)
    {
        OwnerWindow->setWindowTitle(QApplication::translate("OwnerWindow", "Form", Q_NULLPTR));
        BackToMainWindowFromOwnerBtn->setText(QApplication::translate("OwnerWindow", "back to main window", Q_NULLPTR));
        label->setText(QApplication::translate("OwnerWindow", "You are owner", Q_NULLPTR));
        toEditProdutsButton->setText(QApplication::translate("OwnerWindow", "Edit Produts", Q_NULLPTR));
        editCustomersInfoButton->setText(QApplication::translate("OwnerWindow", "Edit Customers Info", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OwnerWindow: public Ui_OwnerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OWNERWINDOW_H
