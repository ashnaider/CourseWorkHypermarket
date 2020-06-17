#ifndef SMARTPHONE_H
#define SMARTPHONE_H

#include <string>
#include <vector>

#include "product.h"
#include "mobilephone.h"

/*
«Смартфон» (наследник Мобильного телефона с дополнительными полями: ОС, список установленных программ)
*/

class Smartphone : public MobilePhone {
public:
    Smartphone(
        const std::string& firm,
        const std::string& name,
        double price,
        double max_discount,

        bool contract,
        int max_sim_cards,

        const std::string& operating_system,
        const std::vector<std::string>& list_of_preinstalled_programms );


    virtual std::string GetOS() const;
    virtual std::vector<std::string> GetPreinstalledProgramms() const;
    virtual std::string GetPreinstalledProgrammsInStr() const;

    void PrintInfo() const;

private:
    std::string operating_system;
    std::vector<std::string> list_of_preinstalled_programms;
};


#endif // SMARTPHONE_H
