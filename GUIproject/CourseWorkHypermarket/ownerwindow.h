#ifndef OWNERWINDOW_H
#define OWNERWINDOW_H

#include <QWidget>

#include "ownereditproduts.h"
#include "ownereditcustomersinfo.h"

namespace Ui {
class OwnerWindow;
}

class OwnerWindow : public QWidget
{
    Q_OBJECT

public:
    explicit OwnerWindow(QWidget *parent = 0);
    ~OwnerWindow();

signals:
    void toMainWindowFromOwner();

private slots:
    void on_BackToMainWindowFromOwnerBtn_clicked();

    void on_toEditProdutsButton_clicked();

    void on_editCustomersInfoButton_clicked();

private:
    Ui::OwnerWindow *ui;
    OwnerEditProduts *ownerEditProduts;
    OwnerEditCustomersInfo *ownerEditCustomersInfo;
};

#endif // OWNERWINDOW_H
