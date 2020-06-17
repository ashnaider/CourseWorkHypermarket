#ifndef CUSTOMERWINDOW_H
#define CUSTOMERWINDOW_H

#include "customer.h"
#include "product.h"
#include "regularcustomer.h"
#include "productlist.h"

#include "utilities.h"

#include <QWidget>
#include <QLabel>

#include <vector>
#include <string>
#include <map>

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

    void on_buyProductPushButton_clicked();

private:
    Ui::CustomerWindow *ui;
    Customer *customer;
    Utilities *utilities;
    ProductList* productList=nullptr;

    bool isCustomerRegularBool;

    std::string customerName;

    std::vector<std::vector<std::string>> currentProductList;

    std::vector<Product* > ptrProductListVec;

    std::map<std::string, double> productsPriceMap;


    bool isCustomerRegular(std::string customerName);

    void setMoneyOnScreen(double money);

    void setRegularCustomerInfo();

    void setProductsComboBox();

    void setTotalCostOfBoughtProducts();

    void addProductsOnScreen(QString productName);

    std::vector<std::string> getProductList();

};

#endif // CUSTOMERWINDOW_H
