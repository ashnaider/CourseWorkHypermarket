#include "customer.h"
#include "product.h"

#include <stdexcept>
#include <algorithm>

#include <string>
#include <iostream>
#include <sstream>

#include <vector>

#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>

Customer::Customer(std::string customerName)
{
    utilities = new Utilities;

    std::vector<std::string> customerInfo = findCustomerInfo(customerName);

    this->money = std::stoi(customerInfo[2]);
}

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

double Customer::GetFinalProductPrice(const Product *product) {
    double max_discount = std::min( GetPersonalDiscount(), product->GetMaxDiscount() );
    double total_cost = product->GetPrice() - max_discount;
    return total_cost;
}

//bool Customer::BuyProduct(const Product& product) {
//    double max_discount = std::min( GetPersonalDiscount(), product.GetMaxDiscount() );
//    double total_cost = product.GetPrice() - max_discount;
//    if (money >= total_cost) {
//        money -= total_cost;
//        return true;
//    }
//    return false;
//}

bool Customer::BuyProduct(const Product* product) {
    double total_cost = GetFinalProductPrice(product);
    if (money >= total_cost) {
        money -= total_cost;
        return true;
    }
    return false;
}


std::vector<std::string> Customer::findCustomerInfo(std::string name) {
    utilities = new Utilities;

    std::vector<std::vector<std::string>> customers = utilities->readFileByWord(utilities->moneyFile);
    std::vector<std::string> result;
    for (const auto& customer: customers) {
        if (customer[0] == name) {
            result = customer;
        }
    }

    return result;
}


