#include <string>

#include "product.h"
#include "laptop.h"


Laptop::Laptop(
    const std::string& firm,
    const std::string& name,
    double price,
    double max_discount,

    double diagonal_size,
    double weight,
    int cpu_cores,
    int main_memory )

    : Product(firm, name, price, max_discount)
    , diagonal_size(diagonal_size)
    , weight(weight)
    , cpu_cores(cpu_cores)
    , main_memory(main_memory)
    { }

double Laptop::GetDiagonalSize() const {
    return diagonal_size;
}

double Laptop::GetWeight() const {
    return weight;
}

int Laptop::GetCpuCores() const {
    return cpu_cores;
}

int Laptop::GetMainMemory() const {
    return main_memory;
}
