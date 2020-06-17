#include "product.h"

#include <string>
#include <vector>
#include <iostream>
#include <stdexcept>

/*
«Товар» (фирма, наименование, цена, максимальный процент скидки)
*/

Product::Product(
    const std::string& firm,
    const std::string& name,
    double price,
    double max_discount )
    : firm(firm)
    , name(name)
    , price(price)
    , max_discount(max_discount)
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

std::string Product::GetFirm() const {
    return firm;
}

std::string Product::GetName() const {
    return name;
}

bool Product::GetIsContract() const {
    return false;
}

int Product::GetMaxSimCards() const {
    return 0;
}

std::string Product::GetOS() const {
    return "";
}

std::vector<std::string> Product::GetPreinstalledProgramms() const {
    return {};
}

double Product::GetDiagonalSize() const {
    return 0;
}

double Product::GetWeight() const {
    return 0;
}

int Product::GetCpuCores() const {
    return 0;
}

int Product::GetMainMemory() const {
    return 0;
}

std::string Product::GetPreinstalledProgrammsInStr() const {
    return "";
}
Product::~Product() {

}
