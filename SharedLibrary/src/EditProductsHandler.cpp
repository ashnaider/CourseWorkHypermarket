#include "EditProductsHandler.h"
#include "Utilities.h"

#include <vector>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

string EditProductsHandler::editMobilePhones() {
  ifstream ifs("../MobilePhones.txt");

  
  
  ifs.close();
  
}

string EditProductsHandler::editProduct(int product) {
  string product_name;
  switch(product) {
  case 1: product_name = "Mobile phone"; break;
  case 2: product_name = "Smartphone"; break;
  case 3: product_name = "Laptop"; break;
  default: product_name = "Undefined"; 
  }
 
  cout << "You are editing product number " << product << endl;
  return "";
}

void EditProductsHandler::showProducts() const {
  cout << "=======================================" << endl;
  cout << "\tAvailable types of products" << endl;
  cout << "1 - Mobile phone" << endl;
  cout << "2 - Smartphone" << endl;
  cout << "3 - Laptop" << endl;
  cout << "=======================================" << endl;
}


string EditProductsHandler::Start() {
  
  showProducts();
  
  vector<string> expected_inputs = {"1", "2", "3"};

  string info_message = "Which product do you want to edit?";

  string wrong_argument_message = "Please input only numbers of products";

  string esc_key = "q";

  while (true) {
    string users_choise = GetUsersInput(expected_inputs,
					info_message,
					wrong_argument_message, 
					esc_key);

    if (users_choise == "q") {
      return "q"; 
    } else {
      // edit product number:
      int int_user_choise = stoi(users_choise);
      editProduct(int_user_choise);
    }
  }
}
