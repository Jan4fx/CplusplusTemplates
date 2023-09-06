#include <iostream>
#include "factorialIterativeFunction.h"

int factorialIterative(int n) {
    int result = 1;
    for(int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

#ifdef RUN_MAIN
int main() {
    int number;
    std::cout << "Enter a number to find its factorial: ";
    std::cin >> number;

    int result = factorialIterative(number);
    std::cout << "The factorial of " << number << " is: " << result << std::endl;

    return 0;
}
#endif
