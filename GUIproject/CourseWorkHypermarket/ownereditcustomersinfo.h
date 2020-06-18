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

signals:
    void goBackToOwnerWindow();

private slots:
    void on_goBackToOwnerButton_clicked();

    void on_cancelPushButton_clicked();

    void on_deleteCustomerPushButton_clicked();

    void on_editCustomerPushButton_clicked();

    void on_savePushButton_clicked();

private:
    Ui::OwnerEditCustomersInfo *ui;
    Utilities *utilities;

    std::vector<std::string> infoHeader;
    std::vector<std::vector<std::string>> totalInfo;

    int currRow = -1;

    QList<QString> GetProductInfoHeader(const std::vector<std::string>& productInfoHeader) const;

    void setCustomersInfoTable();

    void setLineEdits();

    void setVisibleRegularCustomersFields(bool set);

    void setStatusComboBox();

    void getCustomersInfo();

    void fillLineEdits();

    bool isRegular();

    std::vector<std::string> getInfoFromLineEdits();

};

#endif // OWNEREDITCUSTOMERSINFO_H
