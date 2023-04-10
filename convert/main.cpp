#include <iostream>

void print(int x)
{
	std::cout << x << std::endl;
}

int main()
{
	print( static_cast<int>(5.5) ); // explicitly convert double value 5.5 to an int

    std::cout << "Please enter a single character: ";
    char ch{}; // 97 is ASCII code for 'a'
    std::cin >> ch;
    std::cout << ch << " has value " << static_cast<int>(ch) << '\n'; // print value of variable ch as an int

    constexpre int number {5};
	return 0;
}
