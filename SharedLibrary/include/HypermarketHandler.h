#pragma once

#include "Utilities.h"

#include <vector>
#include <string>

class HypermarketHandler {
public:
    void Start();

    UserStatus OwnerOrCustomer() const;

};
