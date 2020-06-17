#include "product.h"
#include "mobilephone.h"

#include <string>
#include <stdexcept>
#include <vector>

/*
«Мобильный телефон» (с полем – с контрактом или без, максимальное поддерживаемое количество SIM-карт)
*/

MobilePhone::MobilePhone(
        const std::string& firm,
        const std::string& name,
        double price,
        double max_discount,

        bool contract,
        int max_sim_cards )

        : Product(firm, name, price, max_discount)
        , contract(contract)
        , max_sim_cards(max_sim_cards)
      {
        if (max_sim_cards < 0) {
          throw std::invalid_argument("Error in MobilePhone constructor! max_sim_cards can't be negative!");
        }
      }


std::vector<std::string> MobilePhone::getInfo() const {
  std::string str_contract = contract ? "true" : "false";

  return {firm, name, std::to_string(price), std::to_string(max_discount), str_contract,
      std::to_string(max_sim_cards)};
}

bool MobilePhone::GetIsContract() const {
    return contract;
}

int MobilePhone::GetMaxSimCards() const {
    return max_sim_cards;
}


MobilePhone::MobilePhone() { }
