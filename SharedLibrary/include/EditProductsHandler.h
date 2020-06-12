#pragma once

#include "Utilities.h"
#include "Product.h"

#include <vector>
#include <string>
#include <map>

class EditProductsHandler {
 public:
  EditProductsHandler();
  std::string Start();
  
  void showProductList() const;

  std::string editProduct(int productNumber);

  void showProductInfo(std::string productName) const;

 private:
  std::map<std::string, std::string> pathToDb;
  std::vector<std::string> productList;
};
