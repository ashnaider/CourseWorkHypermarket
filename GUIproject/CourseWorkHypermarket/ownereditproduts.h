#ifndef OWNEREDITPRODUTS_H
#define OWNEREDITPRODUTS_H

#include <QWidget>
#include <vector>
#include <string>

#include "utilities.h"

enum CurrProductClass {
    MOBILEPHONE,
    SMARTPHONE,
    LAPTOP
};

namespace Ui {
class OwnerEditProduts;
}

class OwnerEditProduts : public QWidget
{
    Q_OBJECT

public:
    explicit OwnerEditProduts(QWidget *parent = 0);
    ~OwnerEditProduts();

signals:
    void goBackToOwnerButton();

private slots:
    void on_goBackToOwnerButton_clicked();

    void on_productClassesComboBox_currentIndexChanged(const QString &arg1);

    void on_deletePushButton_clicked();

    void on_editPushButton_clicked();

private:
    Ui::OwnerEditProduts *ui;
    Utilities *utilities;

    std::vector<std::vector<std::string>> currProductList;

    std::vector<std::string> currProductListHeader;

    std::vector<QWidget* > currInputWidgets;

    int currRow = -1;

    bool currTableWasChanged = false;

    CurrProductClass currProductClass;




    void setProductClassesComboBox();

    void setProductListTable();

    void getCurrProductList(const QString& productClass);

    void fillEditLines();

    void fillProductInfo();

    void fillMobilePhone();

    void fillSmartphone();

    void fillLaptop();

    void setVisibleEditLines(const QString& productClass, bool set);

    void setVisibleMobilePhone(bool set);

    void setVisibleSmartphone(bool set);

    void setVisibleLaptop(bool set);

    void deleteInputWidget(const QString& widgetName);
};

#endif // OWNEREDITPRODUTS_H
