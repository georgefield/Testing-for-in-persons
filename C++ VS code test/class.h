#pragma once

class foo{
public:
    int getTheHiddenValue();
    void printFibonacci(int howMany);
private:
    const int _hiddenValue = 4579345;
};