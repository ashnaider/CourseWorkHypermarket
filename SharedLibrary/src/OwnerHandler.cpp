#include "OwnerHandler.h"
#include "Utilities.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void OwnerHandler::Start() const {
  vector<string> expected_inputs = {"1", "0"};
  string info_message = "Handle Products(1) or handle Customers(0), q to exit";
  string wrong_argument_message = "use only 1 or 0";
  string esc_key = "q";
  GetUsersInput(expected_inputs, info_message, wrong_argument_message, esc_key);
}
