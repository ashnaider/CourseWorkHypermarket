#pragma once

#include <string>

/*
«Товар» (фирма, наименование, цена, максимальный процент скидки)    
*/

class Product {
public:
    Product();

    Product(
        const std::string& new_firm, 
        const std::string& new_name, 
        double new_price, 
        double new_max_discount );

    double GetPrice() const;

    double GetMaxDiscount() const;

    ~Product();

protected:
    std::string firm;
    std::string name;

    double price;
    double max_discount;
};