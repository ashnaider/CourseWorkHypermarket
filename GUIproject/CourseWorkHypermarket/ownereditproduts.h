#ifndef OWNEREDITPRODUTS_H
#define OWNEREDITPRODUTS_H

#include <QWidget>
#include <vector>
#include <string>

#include "utilities.h"

//enum CurrProductClass {
//    MOBILEPHONE,
//    SMARTPHONE,
//    LAPTOP
//};

namespace Ui {
class OwnerEditProduts;
}

class OwnerEditProduts : public QWidget
{
    Q_OBJECT

public:
    explicit OwnerEditProduts(QWidget *parent = 0);
    ~OwnerEditProduts();

    enum CurrProductClass {
        MOBILEPHONE,
        SMARTPHONE,
        LAPTOP
    };

    enum CurrOperation {
        ADD_NEW,
        EDIT
    };

signals:
    void goBackToOwnerButton();

private slots:
    void on_goBackToOwnerButton_clicked();

    void on_productClassesComboBox_currentIndexChanged(const QString &arg1);

    void on_deletePushButton_clicked();

    void on_editPushButton_clicked();

    void on_cancelPushButton_clicked();

    void on_savePushButton_clicked();

    void on_addNewPushButton_clicked();

    void on_revertChangesPushButton_clicked();

    void on_saveAllpushButton_clicked();

private:
    Ui::OwnerEditProduts *ui;
    Utilities *utilities;

    std::vector<std::vector<std::string>> currProductList;

    std::vector<std::vector<std::string>> currProductListCopy;

    std::vector<std::string> currProductListHeader;

    std::vector<QWidget* > currInputWidgets;

    int currRow = -1;

    bool currTableWasChanged = false;

    CurrProductClass currProductClass;

    CurrOperation currOperation = ADD_NEW;




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

    void setLineEditsValidators();

    void clearLineInputs();

    std::vector<std::string> getInfoFromLineEdits();

    bool productExist(const std::vector<std::string>& product);

    void saveAll();

};

#endif // OWNEREDITPRODUTS_H
