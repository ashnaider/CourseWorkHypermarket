#pragma once

#include <string>
#include <vector>

#include "Product.h"
#include "MobilePhone.h"

/*
«Смартфон» (наследник Мобильного телефона с дополнительными полями: ОС, список установленных программ)
*/

class Smartphone : public MobilePhone {
public:
    Smartphone(
        const std::string& new_firm, 
        const std::string& new_name, 
        double new_price, 
        double new_max_discount,
        
        bool new_contract,
        int new_max_sim_cards,
	int new_quantity, 
        
        const std::string& new_operating_system,
        const std::vector<std::string>& new_list_of_preinstalled_programms );

    void PrintInfo() const;

private:
    std::string operating_system;
    std::vector<std::string> list_of_preinstalled_programms;
};

