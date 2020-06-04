#ifndef OWNEREDITCUSTOMERSINFO_H
#define OWNEREDITCUSTOMERSINFO_H

#include <QWidget>

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

private:
    Ui::OwnerEditCustomersInfo *ui;
};

#endif // OWNEREDITCUSTOMERSINFO_H
