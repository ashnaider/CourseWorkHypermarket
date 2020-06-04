#include "Utilities.h"

#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <stdexcept>


std::string GetUsersInput(const std::vector<std::string>& expected_inputs,
                const std::string& info_message,
                const std::string& wrong_argument_message, 
                const std::string& esc_key) {
    std::cout << info_message << std::endl;
    std::string tmp;
    while (true) {
        std::cin >> tmp;
        
        if (std::find(expected_inputs.begin(), expected_inputs.end(), tmp) != expected_inputs.end()
            || tmp == esc_key ) {
            return tmp;
        }
        else {
            std::cout << wrong_argument_message << std::endl;
        }
    }
    return tmp;
}
