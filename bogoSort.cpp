//notorously inefficient sorting algorithm
//regenerates input until there is a sort list
//average complexitity of O((n+1)!) and worst case of infinity/infinitum
//to compile standalone g++ -DRUN_MAIN bogoSort.cpp -o bogoSort


#include <iostream>
#include <vector>
#include <algorithm> // for std::shuffle
#include <random>    // for std::default_random_engine
#include <chrono>    // for std::chrono::system_clock

bool isSorted(const std::vector<int>& arr) {
    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int bogoSort(std::vector<int>& arr) {
    // Using the current time as seed for random number generation
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);

    int permutationCount = 0;
    while (!isSorted(arr)) {
        std::shuffle(arr.begin(), arr.end(), generator);
        ++permutationCount;
    }
    return permutationCount;
}

#ifdef RUN_MAIN
int main() {
    std::vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    std::cout << "Original array: ";
    for (int num : arr) {
        std::cout << num << ' ';
    }
    std::cout << std::endl;

    int permutationCount = bogoSort(arr);

    std::cout << "Sorted array:   ";
    for (int num : arr) {
        std::cout << num << ' ';
    }
    std::cout << std::endl;
    std::cout << "Sorted after " << permutationCount << " permutations." << std::endl;
    return 0;
}
#endif
