#include "class.h"
#include <iostream>
#include <stdint.h>

int foo::getTheHiddenValue()
{
    return _hiddenValue;
}

void foo::printFibonacci(int howMany)
{
    int64_t prev[2] = { 1,1 };
    std::cout << "1\n1\n";
    for (int i = 2; i < howMany; i++){
        prev[i % 2] = prev[0] + prev[1];
        std::cout << prev[i % 2] << std::endl;
    }
}