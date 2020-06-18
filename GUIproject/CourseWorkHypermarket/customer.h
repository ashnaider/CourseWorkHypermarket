#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "product.h"

#include <vector>
#include <string>

class Customer
{
public:
    Customer(std::string customerName);
    Customer(double new_money);

    virtual double GetPersonalDiscount() const;

    virtual double GetFinalProductPrice(const Product* product);

    virtual bool BuyProduct(const Product& product);
    virtual bool BuyProduct(const Product* product);

    virtual std::string GetFirstName() const { return { }; }

    virtual double GetTotalCostOfBoughtProducts() const { return 0; }

    double GetMoney() const;

    std::vector<std::string> findCustomerInfo(std::string name);

protected:

    std::vector<std::string> GetUsersInfo();

    double money;
};

#endif // CUSTOMER_H
