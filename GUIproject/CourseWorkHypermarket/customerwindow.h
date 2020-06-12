#ifndef CUSTOMERWINDOW_H
#define CUSTOMERWINDOW_H

#include "customer.h"
#include "regularcustomer.h"

#include <QWidget>

#include <vector>
#include <string>

namespace Ui {
class CustomerWindow;
}

class CustomerWindow : public QWidget
{
    Q_OBJECT

public:
    explicit CustomerWindow(std::string customerName, QWidget *parent = 0);
    ~CustomerWindow();

signals:
    void goBackToMainWindow();

private slots:
    void on_backToLoginWindowFromCustomerButton_clicked();

private:
    Ui::CustomerWindow *ui;
    Customer *customer;
    RegularCustomer *regularCustomer;

    std::string customerName;

    void setMoneyOnScreen(double money);

};

#endif // CUSTOMERWINDOW_H
