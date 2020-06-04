#ifndef OWNEREDITPRODUTS_H
#define OWNEREDITPRODUTS_H

#include <QWidget>

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

private:
    Ui::OwnerEditProduts *ui;
};

#endif // OWNEREDITPRODUTS_H
