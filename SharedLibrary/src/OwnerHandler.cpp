#include "OwnerHandler.h"
#include "Utilities.h"
#include "EditProductsHandler.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string OwnerHandler::Start() const {

  vector<string> expected_inputs = {"1", "0"};
  string info_message = "Edit Products(1) info or edit Customers(0) info, q to exit";
  string wrong_argument_message = "Please input only 1 (edit products info) or 0 (edit customers info)";
  string esc_key = "q";
  string users_choise = GetUsersInput(expected_inputs, info_message, wrong_argument_message, esc_key);


  if (users_choise == "1") {
    // edit products
    cout << "You are editing products info!" << endl;

    EditProductsHandler ph;
    ph.Start();
    
  } else if (users_choise == "0") {
    // edit customers
    cout << "You are editin customers info!" << endl;
  } else {
    return "q";
  }
}
