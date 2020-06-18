#ifndef CUSTOMERLIST_H
#define CUSTOMERLIST_H

#include <string>
#include <vector>

#include "customer.h"
#include "regularcustomer.h"
#include "utilities.h"

class CustomerList
{
public:
    CustomerList();

    std::vector<Customer* > ptrVecCustomersList;

private:
    Utilities *utilities;
    std::vector<std::vector<std::string>> customersInfo;
};

#endif // CUSTOMERLIST_H
