#include <string>
#include <stdexcept>
#include <vector>

#include "Product.h"
#include "MobilePhone.h"
#include "Smartphone.h"

/*
«Смартфон» (наследник Мобильного телефона с дополнительными полями: ОС, список установленных программ)
*/

Smartphone::Smartphone(
        const std::string& new_firm, 
        const std::string& new_name, 
        double new_price, 
        double new_max_discount,
        
        bool new_contract,
        int new_max_sim_cards,
        
        std::string new_operating_system,
        std::vector<std::string> new_list_of_preinstalled_programms )

        : MobilePhone(new_firm, new_name, new_price, new_max_discount, new_contract, new_max_sim_cards)
        , operating_system(new_operating_system)
        , list_of_preinstalled_programms(new_list_of_preinstalled_programms)

        { }
