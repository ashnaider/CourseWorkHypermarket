#include "Product.h"
#include "MobilePhone.h"

#include <string>
#include <stdexcept>
#include <vector>

/*
«Мобильный телефон» (с полем – с контрактом или без, максимальное поддерживаемое количество SIM-карт)
*/

MobilePhone::MobilePhone(
        const std::string& new_firm, 
        const std::string& new_name, 
        double new_price, 
        double new_max_discount,
        
        bool new_contract,
        int new_max_sim_cards,
	int new_quantity )
    
        : Product(new_firm, new_name, new_price, new_max_discount)
        , contract(new_contract)
        , max_sim_cards(new_max_sim_cards)
	, quantity(new_quantity)
      {
        if (max_sim_cards < 0) {
          throw std::invalid_argument("Error in MobilePhone constructor! max_sim_cards can't be negative!");
        }
      } 


std::vector<std::string> MobilePhone::getInfo() const {
  std::string str_contract = contract ? "true" : "false";
  
  return {firm, name, std::to_string(price), std::to_string(max_discount), str_contract,
      std::to_string(max_sim_cards), std::to_string(quantity)};
}
