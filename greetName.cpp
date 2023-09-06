#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main() {
    std::string name;
    std::ifstream infile("name.txt");

    // Check if the file exists and is not empty
    if (!infile || infile.peek() == std::ifstream::traits_type::eof()) {
        // Close the file if it's open
        if (infile.is_open()) {
            infile.close();
        }

        // Execute storeName.exe to populate name.txt
        std::system("storeName.exe");

        // Re-open the file for reading
        infile.open("name.txt");
    }

    // Check if the file is open and read the name
    if (infile.is_open()) {
        std::getline(infile, name);
        infile.close();
    } else {
        std::cerr << "Error: Could not read the file." << std::endl;
        return 1;
    }

    // Display the greeting
    std::cout << "Hello " << name << ", it's a gloriously beautiful day to learn C++" << std::endl;

    return 0;
}
