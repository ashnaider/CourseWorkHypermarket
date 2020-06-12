#include "EditProductsHandler.h"
#include "Utilities.h"

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

EditProductsHandler::EditProductsHandler() {
  // read info from products.txt to map
  // to get available types of products

  ifstream ifs("../Db/products.txt");
  string type, path;

  while (ifs >> type >> path) {
    pathToDb[type] = path;
    productList.push_back(type);
  }
  ifs.close();
}

void EditProductsHandler::showProductInfo(string productName) const {
  string pathToProductInfo = pathToDb.at(productName);

  // read info from file
  ifstream ifs(pathToProductInfo);

  string header;
  getline(ifs, header);
  stringstream ssheader(header);
  string column;
  
  // printing header
  while (ssheader >> column) {
    cout << column << "\t";
  }
  string nextLine;
  while (getline(ifs, nextLine)) {
    
  }
  
}

string EditProductsHandler::editProduct(int productNumber ) {
 
  cout << "You are editing product " << productList[productNumber - 1] << endl;

  string output;
  
  return output;
}

void EditProductsHandler::showProductList() const {
  cout << "=======================================" << endl;
  cout << "\tAvailable types of products" << endl;

  int counter = 0;
  for (const auto& product : productList) {
    cout << ++counter << " - " << product << endl;
  }
  
  cout << "=======================================" << endl;
}


string EditProductsHandler::Start() {
  
  showProductList();
  
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
