#include <iostream>

#include "add.h"

#define TEST

void doubleNumber(int value)
{
    std::cout << "Double " << value << " is: " << value * 2 << "\n";

    #ifdef TEST
        std::cout << "test \n";
    #endif // TEST
}
