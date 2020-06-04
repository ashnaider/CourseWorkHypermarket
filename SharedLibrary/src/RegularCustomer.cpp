#include "Customer.h"
#include "RegularCustomer.h"

#include <string>
#include <vector>
#include <stdexcept>
#include <sstream>

RegularCustomer::RegularCustomer(
    double new_money, const std::vector<std::string>& new_full_name, 
    double new_general_cost_of_bought_products )
    : Customer(new_money)
    , full_name(new_full_name) 
    , total_cost_of_bought_products(new_general_cost_of_bought_products) 
    {
        if (total_cost_of_bought_products < 0) {
            throw std::invalid_argument("Error in RegularCustomer.cpp constructor! general_cost_of_bought_products can't be negative!");
        }
}

double RegularCustomer::GetPersonalDiscount() const {
    double discount = total_cost_of_bought_products / 1000;
    return (discount <= 15) ? discount : 15; 
}

void RegularCustomer::IncreaseTotalCostOfBoughtProducts(double cost) {
    total_cost_of_bought_products += cost;
}

bool RegularCustomer::BuyProduct(const Product& product) {
    double total_cost = product.GetPrice() - GetPersonalDiscount();
    if (money >= total_cost) {
        money -= total_cost;
        IncreaseTotalCostOfBoughtProducts(total_cost);
        return true;
    }
    return false;
}

double RegularCustomer::GetTotalCostOfBoughtProducts() const {
    return total_cost_of_bought_products;
}

std::string RegularCustomer::GetName() const {
    std::stringstream ss;
    for (const std::string& name : full_name) {
        ss << name + " ";
    }
    std::string str_name = ss.str();
    str_name.pop_back();
    return str_name; 
}