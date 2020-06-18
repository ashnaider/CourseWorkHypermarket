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

bool Customer::BuyProduct(const Product& product) {
    double max_discount = std::min( GetPersonalDiscount(), product.GetMaxDiscount() );
    double total_cost = product.GetPrice() - max_discount;
    if (money >= total_cost) {
        money -= total_cost;
        return true;
    }
    return false;
}

bool Customer::BuyProduct(const Product* product) {
    double total_cost = GetFinalProductPrice(product);
    if (money >= total_cost) {
        money -= total_cost;
        return true;
    }
    return false;
}


std::vector<std::string> Customer::findCustomerInfo(std::string name) {
    QFile customersMoney("/home/anton/CourseWorkDb/money.txt");

    if (!customersMoney.open(QIODevice::ReadOnly | QIODevice::Text)) {
            //QMessageBox::warning(this, "Error!", "Can not open file!");
            return {};
    }

    QTextStream instream(&customersMoney);
    QString line = instream.readAll();
    std::string all = line.toStdString();

    customersMoney.close();

    std::stringstream ss(all);

    std::vector<std::string> resultInfo;
    std::string nextLine, nextWord, temp;
    bool customerFound = false;

    std::getline(ss, temp);
    // find our customer line by name
    while (std::getline(ss, nextLine)) {
        std::stringstream ssnextLine(nextLine);
        while (std::getline(ssnextLine, nextWord, ';')) {
            if (customerFound) {
                resultInfo.push_back(nextWord);
            }

            if (nextWord == name) {
                customerFound = true;
                resultInfo.push_back(nextWord);
            }

        }
        if (customerFound) {
            break;
        }
    }

    return resultInfo;
}




//std::vector<std::string> Customer::GetUsersInfo() {
//    QFile readCustomerInfo("../.CourseWork/money.txt");

//    if (!readCustomerInfo.open(QIODevice::ReadOnly | QIODevice::Text)) {
//        return {};
//    }

//    QTextStream mystream(&readCustomerInfo);
//    QString allInfo = mystream.readAll();

//    std::string strAll = allInfo.toStdString();

//    readCustomerInfo.close();

//    std::stringstream file_ss(strAll);

//    std::vector<std::string> users_info;

//    std::string temp_line;
//    while (std::getline(file_ss, temp_line)) {
//        std::stringstream temp_ss(temp_line);
//        std::string temp_word;

//        while (temp_ss>> temp_word) {
//            users_info.push_back(temp_word);
//        }
//    }

//    return users_info;
//}

