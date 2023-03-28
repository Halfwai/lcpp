#include <iostream>
#include "add.h"

int readNumbers()
{
    std::cout << "Please enter a number: ";
    int number {};
    std::cin >> number;
    return number;
}

void writeAnswer(int x)
{
    std::cout << "Those numbers added together equal: " << x << "\n";
}
