#include "fib.hpp"
#include <iostream>

void fib(int n) {
    int a = 0, b = 1, c;
    for (int i = 0; i < n; ++i) {

        c = a + b;
        a = b;
        b = c;
    }

    std::cout << a << std::endl;
}