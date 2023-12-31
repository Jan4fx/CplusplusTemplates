#include <iostream>
#include <vector>
#include <random>
#include <chrono>
#include "bogoSort.h"
#include "bubbleSort.h"
#include "countingSort.h"
// To compile g++ testSort.cpp bogoSort.cpp bubbleSort.cpp countingSort.cpp -o testSort


// Generate a random array of size 'n' with elements from 0 to 'max_val'
std::vector<int> generateRandomArray(int n, int max_val) {
    std::vector<int> arr(n);
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);
    std::uniform_int_distribution<int> distribution(0, max_val);

    for (int i = 0; i < n; ++i) {
        arr[i] = distribution(generator);
    }
    return arr;
}

void testBogoSort(std::vector<int> arr) {
    int permutations = bogoSort(arr);
    std::cout << "BogoSort took " << permutations << " permutations." << std::endl;
}

void testBubbleSort(std::vector<int> arr) {
    int numSwaps = bubbleSort(arr);
    std::cout << "BubbleSort took " << numSwaps << " permutations." << std::endl;
}
void testCountingSort(std::vector<int> arr) {
    int numOperations = countingSort(arr);
    std::cout << "CountingSort took " << numOperations << " operations." << std::endl;
}


int main() {

    std::vector<int> randomArr = generateRandomArray(10, 30);
    std::vector<int> arrCopy = randomArr;  // Create a copy 
    std::vector<int> arrCopy2 = randomArr;
    std::cout << "Array being sorted: ";
    for (const auto &el : randomArr) {
        std::cout << el << ' ';
    }
    std::cout << std::endl;
    std::cout << "TESTING..." << std::endl;

    // Test BogoSort
    testBogoSort(randomArr);

    // Test BubbleSort
    testBubbleSort(arrCopy);

    // Test countingSort
    testCountingSort(arrCopy2);

    std::cout << "DONE." << std::endl;
    return 0;
}
