#include <iostream>
#include "factorialIterativeFunction.h"

void testFactorialIterative() {
    std::cout << "Testing Iterative Factorial..." << std::endl;

    int passedTests = 0;
    int totalTests = 3;

    int testValue = 5;
    int calculatedValue = factorialIterative(testValue);
    if (calculatedValue != 120) {
        std::cout << "Test failed: factorialIterative(5) should be 120" << std::endl;
    } else {
        std::cout << "Test with " << testValue << " calculated as " << calculatedValue << " PASSED\n";
        ++passedTests;
    }

    testValue = 0;
    calculatedValue = factorialIterative(testValue);
    if (calculatedValue != 1) {
        std::cout << "Test failed: factorialIterative(0) should be 1" << std::endl;
    } else {
        std::cout << "Test with " << testValue << " calculated as " << calculatedValue << " PASSED\n";
        ++passedTests;
    }

    testValue = 1;
    calculatedValue = factorialIterative(testValue);
    if (calculatedValue != 1) {
        std::cout << "Test failed: factorialIterative(1) should be 1" << std::endl;
    } else {
        std::cout << "Test with " << testValue << " calculated as " << calculatedValue << " PASSED\n";
        ++passedTests;
    }

    std::cout << passedTests << "/" << totalTests << " tests passed!" << std::endl;
}

int main() {
    testFactorialIterative();
    return 0;
}
