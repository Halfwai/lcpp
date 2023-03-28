#include <iostream>

#include "add.h"

// function declaration


int recieveInt()
{
    std::cout << "Please enter a number: ";
    int input {};
    std::cin >> input;
    return input;
}

void printA()
{
    std::cout << "A\n";
}


int main()
{
//    std::cout << "Please enter a number: ";
//    int x {};
//    std::cin >> x;
//    std::cout << "Double " << x << " is: " << x * 2 << "\n";
//    std::cout << "Triple " << x << " is: " << x * 3 << "\n";
//    return 0;
//
    int x { recieveInt() };
    doubleNumber(x);
//    int y { recieveInt() };
//    std::cout << x << " + " << y << " is " << x + y << "\n";
//    std::cout << x << " - " << y << " is " << x - y << "\n";
//
//    printA();
    return 0;
}


