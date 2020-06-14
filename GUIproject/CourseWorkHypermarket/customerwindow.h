#ifndef CUSTOMERWINDOW_H
#define CUSTOMERWINDOW_H

#include "customer.h"
#include "regularcustomer.h"

#include "utilities.h"

#include <QWidget>
#include <QLabel>

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

    void on_findProductsButton_clicked();

private:
    Ui::CustomerWindow *ui;
    Customer *customer;
    Utilities *utilities;

    bool isCustomerRegularBool;

    std::string customerName;

    bool isCustomerRegular(std::string customerName);

    void setMoneyOnScreen(double money);

    void setRegularCustomerInfo();

    void setProductsComboBox();

    void addProductsOnScreen(QString productName);

    std::vector<std::string> getProductList();

};

#endif // CUSTOMERWINDOW_H
