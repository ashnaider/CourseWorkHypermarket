#pragma once

#include "Utilities.h"
#include "Product.h"

#include <vector>
#include <string>

class EditProductsHandler {
 public:
  std::string Start() ;
  
  void showProducts() const;

  std::string editProduct(int Products);

  std::string editMobilePhones();
  std::string editSmartphone();
  std::string editLaptop();
};
