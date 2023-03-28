#include <iostream>

int main()
{
    // std::cout stands for "character output"
    int x {5};
    [[maybe_unused]] int y{};
    int z {x = 7};
    // std::endl and \n will do the same thing, but \n is preferred as it doesn't flush the buffer
    std::cout << x << " boobs" << std::endl;
    std::cout << "newline test!\n";
    std::cout << "Enter a number: ";

    std::cin >> y;

    std::cout << "You entered " << y << "\n";

    std::cout << z << "\n";


    return 0;
}
