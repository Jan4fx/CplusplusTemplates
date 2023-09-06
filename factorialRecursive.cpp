#include <iostream>

int factorialRecursive(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorialRecursive(n - 1);
}

int main() {
    int number;
    std::cout << "Enter a number to find its factorial: ";
    std::cin >> number;

    int result = factorialRecursive(number);
    std::cout << "The factorial of " << number << " is: " << result << std::endl;

    return 0;
}
