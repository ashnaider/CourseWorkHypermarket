#include "product.h"

#include <string>
#include <iostream>
#include <stdexcept>

/*
«Товар» (фирма, наименование, цена, максимальный процент скидки)
*/

Product::Product(
    const std::string& new_firm,
    const std::string& new_name,
    double new_price,
    double new_max_discount )
    : firm(new_firm)
    , name(new_name)
    , price(new_price)
    , max_discount(new_max_discount)
    {
      if (price < 0 || max_discount < 0) {
        throw std::invalid_argument("Error in Product constructor! Price can't be negative!");
      }
}

Product::Product()
    : firm("")
    , name("")
    , price(0)
    , max_discount(0)
    { }

double Product::GetPrice() const {
  return price;
}


double Product::GetMaxDiscount() const {
  return max_discount;
}

Product::~Product() {
        std::cout << "Product destructed." << std::endl;
    }
