#ifndef OWNEREDITCUSTOMERSINFO_H
#define OWNEREDITCUSTOMERSINFO_H

#include <QWidget>

#include "utilities.h"

namespace Ui {
class OwnerEditCustomersInfo;
}

class OwnerEditCustomersInfo : public QWidget
{
    Q_OBJECT

public:
    explicit OwnerEditCustomersInfo(QWidget *parent = 0);
    ~OwnerEditCustomersInfo();

    enum CurrOperation {
        EDIT,
        ADD_NEW
    };

    enum EditableCustomer {
        USUAL,
        REGULAR
    };

    void setCustomersInfoTable();

    void getCustomersInfo();

signals:
    void goBackToOwnerWindow();

private slots:
    void on_goBackToOwnerButton_clicked();

    void on_cancelPushButton_clicked();

    void on_deleteCustomerPushButton_clicked();

    void on_editCustomerPushButton_clicked();

    void on_savePushButton_clicked();

    void on_addNewCustomerPushButton_clicked();

    void on_statusComboBox_currentTextChanged(const QString &arg1);

    void on_revertChangesPushButton_clicked();

    void on_saveAllPushButton_clicked();

private:
    Ui::OwnerEditCustomersInfo *ui;
    Utilities *utilities;

    std::vector<std::string> passwordsHeader;
    std::vector<std::string> moneyHeader;

    std::vector<std::string> infoHeader;
    std::vector<std::vector<std::string>> totalInfo;

    std::vector<std::vector<std::string>> totalInfoCopy;

    CurrOperation currOperation = ADD_NEW;

    EditableCustomer editableCustomer = REGULAR;

    bool currTableWasChanged = false;

    int currRow = -1;

    void setLineEdits();

    void setVisibleRegularCustomersFields(bool set);

    void setVisibleAllCustomersFields(bool set);

    void setStatusComboBox();

    void fillLineEdits();

    bool isRegular();

    std::vector<std::string> getInfoFromLineEdits();

    bool isValidLineEdits(const std::vector<std::string>& v);

    void clearAllLineEdits();

    void clearRegularCustomersLineEdits();

    void updateTotalInfo(std::vector<std::string>& v);

    void saveAll();
};

#endif // OWNEREDITCUSTOMERSINFO_H
