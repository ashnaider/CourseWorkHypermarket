#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "product.h"

#include <vector>
#include <string>

class Customer
{
public:
    Customer();
    Customer(double new_money);

    virtual double GetPersonalDiscount() const;

    virtual bool BuyProduct(const Product& product);

    double GetMoney() const;

protected:

    std::vector<std::string> GetUsersInfo();

    double money;
};

#endif // CUSTOMER_H
