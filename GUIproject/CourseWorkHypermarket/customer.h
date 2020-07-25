#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "product.h"

#include "utilities.h"

#include <vector>
#include <string>

class Customer
{
public:
    Customer(std::string customerName);
    Customer(double new_money);

    virtual double GetPersonalDiscount() const;

    virtual double GetFinalProductPrice(const Product* product);


    virtual bool BuyProduct(const Product* product);

    virtual std::string GetFirstName() const { return ""; }
    virtual std::string GetFullNameInStr() const {return "";}

    virtual double GetTotalCostOfBoughtProducts() const { return 0; }

    virtual std::string GetStatus() const { return "usual"; }

    double GetMoney() const;

    void findCustomerInfo(std::string name, std::vector<std::string>& result);

    virtual ~Customer();

protected:

    std::vector<std::string> GetUsersInfo();

    Utilities *utilities = nullptr;

    double money;
};

#endif // CUSTOMER_H
