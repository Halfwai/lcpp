#include <iostream>
#include "add.h"


int main()
{
    int x {readNumbers()};
    int y {readNumbers()};
    writeAnswer(x + y);
    std::cerr << "Error Free";
    return 0;
}
