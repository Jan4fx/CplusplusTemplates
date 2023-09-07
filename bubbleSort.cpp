#include <iostream>
#include <vector>

//to compile standalone g++ -DRUN_MAIN bubbleSort.cpp -o bubbleSort
//average/worst case complexity of O(n^2) best case of O(n)
//inefficient for large datasets, redundancy, has problems adapting to orders already present in array
//bubbleSort will always sort the same array the same way

int bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    int numSwaps = 0;  // To keep track of the number of swaps (or comparisons)

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                numSwaps++;
            }
        }
    }
    return numSwaps;
}

#ifdef RUN_MAIN
int main() {
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    std::cout << "Original array: ";
    for (const int &num : arr) {
        std::cout << num << ' ';
    }
    std::cout << std::endl;

    int numSwaps = bubbleSort(arr);

    std::cout << "Sorted array:   ";
    for (const int &num : arr) {
        std::cout << num << ' ';
    }
    std::cout << std::endl;
    std::cout << "BubbleSort took " << numSwaps << " permutations" << std::endl;
    return 0;
}
#endif
