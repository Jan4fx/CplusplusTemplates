#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string name;

    // Prompt the user for their name
    std::cout << "Please enter your name: ";
    std::getline(std::cin, name);

    // Open a text file for writing
    std::ofstream outfile("name.txt");

    // Check if the file was opened successfully
    if (!outfile) {
        std::cerr << "Error: Could not open the file for writing." << std::endl;
        return 1;
    }

    // Write the name to the file
    outfile << name << std::endl;

    // Close the file
    outfile.close();

    std::cout << "Your name has been stored in 'name.txt'" << std::endl;

    return 0;
}
