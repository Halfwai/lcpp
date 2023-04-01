#include <iostream>

int main()
{
    std::cout << "Enter a number: ";
    int x {};
    std::cin >> x;
    if (x == 0){
        std::cout << "Hello, world! boom!";
        std::cout << "Hello, world!";
    } else if (x == 1){
        std::cout << "You Bum";
    } else {
        std::cout << "bummm";
    }

    return 0;
}
