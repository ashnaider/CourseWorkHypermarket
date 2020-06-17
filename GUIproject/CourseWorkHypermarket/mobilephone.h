#ifndef MOBILEPHONE_H
#define MOBILEPHONE_H

#include <string>
#include <vector>

#include "product.h"

/*
«Мобильный телефон» (с полем – с контрактом или без, максимальное поддерживаемое количество SIM-карт)
*/

class MobilePhone : public Product {
public:
    MobilePhone(
        const std::string& firm,
        const std::string& name,
        double price,
        double max_discount,

        bool contract,
        int max_sim_cards );

    // temp
    MobilePhone();

    virtual bool GetIsContract() const;

    virtual int GetMaxSimCards() const;

    std::vector<std::string> getInfo() const;

protected:
    bool contract;
    int max_sim_cards;
};

#endif // MOBILEPHONE_H
