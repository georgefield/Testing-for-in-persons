#include <iostream>

int fib(int depth);

int main()
{
    std::cout << "Hello World!" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << fib(i) << std::endl;
    }
}

int fib(int depth) {
    if (depth == 0 || depth == 1) {
        return 1;
    }
    return fib(depth - 1) + fib(depth - 2);
}
