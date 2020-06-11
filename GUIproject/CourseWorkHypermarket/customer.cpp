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

Customer::Customer()
{

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
    // TO DO:
    // read info from file and get info


    return 333;//money;
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


std::vector<std::string> Customer::GetUsersInfo() {
    QFile readCustomerInfo("../.CourseWork/money.txt");

    if (!readCustomerInfo.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return {};
    }

    QTextStream mystream(&readCustomerInfo);
    QString allInfo = mystream.readAll();

    std::string strAll = allInfo.toStdString();

    readCustomerInfo.close();

    std::stringstream file_ss(strAll);

    std::vector<std::string> users_info;

    std::string temp_line;
    while (std::getline(file_ss, temp_line)) {
        std::stringstream temp_ss(temp_line);
        std::string temp_word;

        while (temp_ss>> temp_word) {
            users_info.push_back(temp_word);
        }
    }

    return users_info;
}
