#include "regularcustomer.h"

#include "customer.h"
#include "regularcustomer.h"

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

RegularCustomer::RegularCustomer(std::string customerName)
    : Customer(customerName)
{
    std::vector<std::string> customerInfo;
    findCustomerInfo(customerName, customerInfo);

    std::string strFullName = customerInfo[4];
    std::stringstream ssFullName(strFullName);

    std::vector<std::string> fullNameVec;
    std::string word;
    while (ssFullName >> word) {
        fullNameVec.push_back(word);
    }

    this->full_name = fullNameVec;

    this->total_cost_of_bought_products = std::stoi(customerInfo[3]);
}

double RegularCustomer::GetPersonalDiscount(const Product *product) const {
    double discount = total_cost_of_bought_products / 1000;
    double maxDiscount = product->GetMaxDiscount();
    maxDiscount = (maxDiscount > 15) ? 15 : maxDiscount;

    if (discount > maxDiscount) {
        return maxDiscount;
    } else {
        return discount;
    }
}

void RegularCustomer::IncreaseTotalCostOfBoughtProducts(double cost) {
    total_cost_of_bought_products += cost;
}

double RegularCustomer::GetFinalProductPrice(const Product *product) {
    double total_cost = ((100 - GetPersonalDiscount(product)) * product->GetPrice()) / 100;
    return total_cost;
}


bool RegularCustomer::BuyProduct(const Product *product) {
    double total_cost = GetFinalProductPrice(product);
    if (money >= total_cost) {
        money -= total_cost;
        IncreaseTotalCostOfBoughtProducts(total_cost);
        return true;
    }
    return false;
}

std::string RegularCustomer::GetStrName() const {
    std::stringstream ss;
    for (const std::string& name : full_name) {
        ss << name + " ";
    }
    std::string str_name = ss.str();
    str_name.pop_back();
    return str_name;
}

std::string RegularCustomer::GetFirstName() const {
    return full_name[0];
}

double RegularCustomer::GetTotalCostOfBoughtProducts() const {
    return total_cost_of_bought_products;
}

std::string RegularCustomer::GetFullNameInStr() const {
    std::string result;
    for (const auto& word : full_name) {
        result += word + " ";
    }
    result.pop_back();
    return result;
}
