#pragma once 

#include <string>

#include "Product.h"

/*
«Ноутбук» (размер диагонали, вес, количество ядер процессора, память).
*/

class Laptop : public Product {
public:
    Laptop(
    const std::string& new_firm, 
    const std::string& new_name, 
    double new_price, 
    double new_max_discount, 
    
    double new_diagonal_size,
    double new_weight,
    int new_cpu_cores, 
    int new_main_memory );

private:
    double diagonal_size;
    double weight;
    int cpu_cores;
    int main_memory;
};