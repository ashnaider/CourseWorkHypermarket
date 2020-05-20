#pragma once

#include <string>

#include "Product.h"

/*
«Мобильный телефон» (с полем – с контрактом или без, максимальное поддерживаемое количество SIM-карт)
*/

class MobilePhone : public Product {
public:
    MobilePhone(
        const std::string& new_firm, 
        const std::string& new_name, 
        double new_price, 
        double new_max_discount,
        
        bool new_contract,
        int new_max_sim_cards );

protected:
    bool contract;  
    int max_sim_cards;
};