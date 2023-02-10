#include <iostream>
#include <sstream>

int main() {
    std::string input = "42 3.14 hello";
    std::stringstream ss(input);

    int x;
    float f;
    std::string str;

    ss >> x >> f >> str;

    std::cout << "x: " << x << std::endl;
    std::cout << "f: " << f << std::endl;
    std::cout << "str: " << str << std::endl;

    // In this example, stringstream is used to extract data from a string and store it in variables. 
    // The >> operator is used to extract data from the stream.


    return 0;
}
