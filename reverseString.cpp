#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string inputString;
    
    // Prompt for string input
    std::cout << "Please enter a string to reverse: ";
    std::getline(std::cin, inputString);
    
    // Reverse the string
    std::reverse(inputString.begin(), inputString.end());
    
    // Display the reversed string
    std::cout << "The reversed string is: " << inputString << std::endl;

    return 0;
}
