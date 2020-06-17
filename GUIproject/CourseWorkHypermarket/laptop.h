#ifndef LAPTOP_H
#define LAPTOP_H

#include <string>

#include "product.h"

/*
«Ноутбук» (размер диагонали, вес, количество ядер процессора, память).
*/

class Laptop : public Product {
public:
    Laptop(
    const std::string& firm,
    const std::string& name,
    double price,
    double max_discount,

    double diagonal_size,
    double weight,
    int cpu_cores,
    int main_memory );


    virtual double GetDiagonalSize() const;
    virtual double GetWeight() const;
    virtual int GetCpuCores() const;
    virtual int GetMainMemory() const;

private:
    double diagonal_size;
    double weight;
    int cpu_cores;
    int main_memory;
};
#endif // LAPTOP_H
