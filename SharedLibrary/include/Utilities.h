#pragma once

#include <string>
#include <vector>

enum UserStatus {
    OWNER,
    CUSTOMER,
    QUIT
};

std::string GetUsersInput(const std::vector<std::string>& expected_inputs,
                const std::string& info_message,
                const std::string& wrong_argument_message, 
                const std::string& esc_key );
