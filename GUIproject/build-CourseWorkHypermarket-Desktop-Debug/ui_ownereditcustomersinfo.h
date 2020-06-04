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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OwnerEditCustomersInfo
{
public:
    QLabel *label;
    QPushButton *goBackToOwnerButton;

    void setupUi(QWidget *OwnerEditCustomersInfo)
    {
        if (OwnerEditCustomersInfo->objectName().isEmpty())
            OwnerEditCustomersInfo->setObjectName(QStringLiteral("OwnerEditCustomersInfo"));
        OwnerEditCustomersInfo->resize(629, 389);
        label = new QLabel(OwnerEditCustomersInfo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 170, 231, 61));
        goBackToOwnerButton = new QPushButton(OwnerEditCustomersInfo);
        goBackToOwnerButton->setObjectName(QStringLiteral("goBackToOwnerButton"));
        goBackToOwnerButton->setGeometry(QRect(440, 30, 151, 51));

        retranslateUi(OwnerEditCustomersInfo);

        QMetaObject::connectSlotsByName(OwnerEditCustomersInfo);
    } // setupUi

    void retranslateUi(QWidget *OwnerEditCustomersInfo)
    {
        OwnerEditCustomersInfo->setWindowTitle(QApplication::translate("OwnerEditCustomersInfo", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("OwnerEditCustomersInfo", "You are editing customers info", Q_NULLPTR));
        goBackToOwnerButton->setText(QApplication::translate("OwnerEditCustomersInfo", "Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OwnerEditCustomersInfo: public Ui_OwnerEditCustomersInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OWNEREDITCUSTOMERSINFO_H
