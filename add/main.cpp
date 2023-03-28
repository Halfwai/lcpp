#include <iostream>
#include "add.h"


int main()
{
    int x {readNumbers()};
    int y {readNumbers()};
    writeAnswer(x + y);
    return 0;
}
