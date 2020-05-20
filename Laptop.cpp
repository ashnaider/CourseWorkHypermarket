#include <string>

#include "Product.h"
#include "Laptop.h" 


Laptop::Laptop( 
    const std::string& new_firm, 
    const std::string& new_name, 
    double new_price, 
    double new_max_discount, 
    
    double new_diagonal_size,
    double new_weight,
    int new_cpu_cores, 
    int new_main_memory )

    : Product(new_firm, new_name, new_price, new_max_discount)
    , diagonal_size(new_diagonal_size)
    , weight(new_weight) 
    , cpu_cores(new_cpu_cores) 
    , main_memory(new_main_memory)
    { }
