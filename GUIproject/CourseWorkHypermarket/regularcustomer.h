#ifndef REGULARCUSTOMER_H
#define REGULARCUSTOMER_H


#pragma once

#include <vector>
#include <string>

#include "customer.h"

class RegularCustomer : public Customer {
public:
    RegularCustomer(double new_money, const std::vector<std::string>& new_full_name,
                    double new_total_cost_of_bought_products);

    virtual double GetPersonalDiscount() const;

    virtual bool BuyProduct(const Product& product);

    void IncreaseTotalCostOfBoughtProducts(double cost);

    double GetTotalCostOfBoughtProducts() const;

    std::string GetName() const;

private:
    std::vector<std::string> full_name;
    double total_cost_of_bought_products;
};
#endif // REGULARCUSTOMER_H