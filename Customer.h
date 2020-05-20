#pragma once 

#include "Product.h"

class Customer {
public:
    Customer(double new_money);

    virtual double GetPersonalDiscount() const;

    virtual bool BuyProduct(const Product& product);

    double GetMoney() const;

protected:
    double money;
};