#include "customerlist.h"

CustomerList::CustomerList()
{
    utilities = new Utilities;

    customersInfo = utilities->readFileByWord(utilities->moneyFile);

}
