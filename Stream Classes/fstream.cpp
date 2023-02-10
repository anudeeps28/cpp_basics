#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::fstream file("input.txt", std::ios::in | std::ios::out | std::ios::app);
    if (!file) {
        std::cerr << "Error opening file" << std::endl;
        return 1;
    }

    std::string str;
    while (std::getline(file, str)) {
        std::cout << str << std::endl;
    }

    file << "Hello, World!" << std::endl;
    file.close();

    return 0;
}

// In this example, fstream is used to both read data from a file and write data to the same file. 
// The ios::in and ios::out flags are used to specify the desired operations, and the ios::app flag is used to append data to the end of the file.

