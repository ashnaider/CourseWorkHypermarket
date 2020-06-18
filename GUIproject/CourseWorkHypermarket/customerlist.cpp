#include "customerlist.h"

CustomerList::CustomerList()
{
    utilities = new Utilities;

    customersInfo = utilities->readFileByWord("/home/anton/CourseWorkDb/money.txt");

}
