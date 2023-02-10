#include <iostream>
#include <fstream>

int main() {
    std::ofstream file("output.txt");
    if (!file) {
        std::cerr << "Error opening file" << std::endl;
        return 1;
    }

    file << "Hello, World!" << std::endl;
    file.close();

    // In this example, ofstream is used to write data to a file, and cerr is used to output an error message to the console 
    // if the file could not be opened.



    return 0;
}
