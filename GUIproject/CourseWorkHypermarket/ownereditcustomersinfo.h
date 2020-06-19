#ifndef OWNEREDITCUSTOMERSINFO_H
#define OWNEREDITCUSTOMERSINFO_H

#include <QWidget>

#include "utilities.h"

enum CurrOperation {
    EDIT,
    ADD_NEW
};

enum EditableCustomer {
    USUAL,
    REGULAR
};

namespace Ui {
class OwnerEditCustomersInfo;
}

class OwnerEditCustomersInfo : public QWidget
{
    Q_OBJECT

public:
    explicit OwnerEditCustomersInfo(QWidget *parent = 0);
    ~OwnerEditCustomersInfo();

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

private:
    Ui::OwnerEditCustomersInfo *ui;
    Utilities *utilities;

    std::vector<std::string> infoHeader;
    std::vector<std::vector<std::string>> totalInfo;

    CurrOperation currOperation = ADD_NEW;

    EditableCustomer editableCustomer = REGULAR;

    int currRow = -1;

    void setCustomersInfoTable();

    void setLineEdits();

    void setVisibleRegularCustomersFields(bool set);

    void setVisibleAllCustomersFields(bool set);

    void setStatusComboBox();

    void getCustomersInfo();

    void fillLineEdits();

    bool isRegular();

    std::vector<std::string> getInfoFromLineEdits();

    bool isValidLineEdits(const std::vector<std::string>& v);

    void clearAllLineEdits();

    void clearRegularCustomersLineEdits();

    void updateTotalInfo(std::vector<std::string>& v);
};

#endif // OWNEREDITCUSTOMERSINFO_H
