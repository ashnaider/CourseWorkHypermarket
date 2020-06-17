#include <string>
#include <stdexcept>
#include <vector>

#include "product.h"
#include "mobilephone.h"
#include "smartphone.h"

/*
«Смартфон» (наследник Мобильного телефона с дополнительными полями: ОС, список установленных программ)
*/

Smartphone::Smartphone(
        const std::string& firm,
        const std::string& name,
        double price,
        double max_discount,

        bool contract,
        int max_sim_cards,

        const std::string& operating_system,
        const std::vector<std::string>& list_of_preinstalled_programms )

        : MobilePhone(firm, name, price, max_discount, contract, max_sim_cards)
        , operating_system(operating_system)
        , list_of_preinstalled_programms(list_of_preinstalled_programms)

        { }



std::string Smartphone::GetOS() const {
    return operating_system;
}

std::vector<std::string> Smartphone::GetPreinstalledProgramms() const {
    return list_of_preinstalled_programms;
}

std::string Smartphone::GetPreinstalledProgrammsInStr() const {
        std::string result;
        for (const auto& programm : list_of_preinstalled_programms) {
            result += programm + "\n";
        }
        return result;
}




