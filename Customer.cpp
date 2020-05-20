#include "Customer.h"
#include "Product.h"

#include <stdexcept>
#include <algorithm>

Customer::Customer(double new_money) 
    : money(new_money) 
    { 
        if (new_money < 0) {
            throw std::invalid_argument("Error in Customer.cpp constructor! Money can't be negative!");
        }
    }


double Customer::GetPersonalDiscount() const {
    return 0;
}

double Customer::GetMoney() const {
    return money;
}

bool Customer::BuyProduct(const Product& product) {
    double max_discount = std::min( GetPersonalDiscount(), product.GetMaxDiscount() );
    double total_cost = product.GetPrice() - max_discount;
    if (money >= total_cost) {
        money -= total_cost;
        return true;
    }
    return false;
}

