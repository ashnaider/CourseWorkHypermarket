#include "HypermarketHandler.h"
#include "Utilities.h"

#include "OwnerHandler.h"

#include <iostream>
#include <string>
#include <vector>

void HypermarketHandler::Start() {
  while (true) {
    UserStatus status = OwnerOrCustomer();
    if (status == OWNER) {
        std::cout << "You are OWNER" << std::endl;
	OwnerHandler oh;
	oh.Start();
    }
    else if (status == CUSTOMER) {
        std::cout << "You are CUSTOMER" << std::endl;
    }
    else if (status == QUIT) {
        std::cout << "Thank you, bye!" << std::endl;
	return ;
    }
  }
}

UserStatus HypermarketHandler::OwnerOrCustomer() const {
    std::vector<std::string> expected_inputs = {"1", "0"};
    std::string users_input = GetUsersInput(expected_inputs, 
    "Would you like to enter as owner(1) or customer(0)? (q to quit)",
    "Please input only 1 (owner) or 0 (customer)", "q");

    if (users_input == "1") {
        return OWNER;
    }
    else if (users_input == "0") {
        return CUSTOMER;
    }
    else {
        return QUIT;
    }
}   
