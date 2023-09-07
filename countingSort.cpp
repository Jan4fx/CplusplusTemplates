//Great for large arrays with numbers in close range
//Time complexity is O(n+k)

#include "countingSort.h"
#include <algorithm>
#include <iostream>
#include <vector>

int countingSort(std::vector<int>& arr) {
    int max_val = *std::max_element(arr.begin(), arr.end());
    std::vector<int> count(max_val + 1, 0);
    std::vector<int> output(arr.size());
    int permutations = 0;

    // Count occurrences
    for (int num : arr) {
        count[num]++;
    }

    // Calculate the position of each element in the sorted array
    for (int i = 1; i <= max_val; ++i) {
        count[i] += count[i - 1];
    }

    // Build the output array
    for (int i = arr.size() - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
        permutations++;
    }

    arr = output;

    return permutations;
}

#ifdef RUN_MAIN
int main() {
    std::vector<int> arr = {4, 2, 2, 8, 3, 3, 1};
    int permutations = countingSort(arr);

    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << ' ';
    }
    std::cout << "\nNumber of permutations: " << permutations << std::endl;

    return 0;
}
#endif
