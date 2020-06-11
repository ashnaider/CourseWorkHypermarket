#ifndef CUSTOMERWINDOW_H
#define CUSTOMERWINDOW_H

#include "customer.h"

#include <QWidget>

namespace Ui {
class CustomerWindow;
}

class CustomerWindow : public QWidget
{
    Q_OBJECT

public:
    explicit CustomerWindow(QWidget *parent = 0);
    ~CustomerWindow();

signals:
    void goBackToMainWindow();

private slots:
    void on_backToLoginWindowFromCustomerButton_clicked();

private:
    Ui::CustomerWindow *ui;
    Customer *customer;
};

#endif // CUSTOMERWINDOW_H
