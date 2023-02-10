#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("input.txt");
    if (!file) {
        std::cerr << "Error opening file" << std::endl;
        return 1;
    }

    std::string str;
    while (std::getline(file, str)) {
        std::cout << str << std::endl;
    }

    file.close();
    // In this example, ifstream is used to read data from a file. 
    // The getline function is used to read a line of text from the file, and the data is output to the console using cout.

    return 0;
}
