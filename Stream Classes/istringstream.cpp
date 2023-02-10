#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string input = "42 3.14 hello";
    std::istringstream ss(input);

    int x;
    float f;
    std::string str;

    ss >> x >> f >> str;

    std::cout << "x: " << x << std::endl;
    std::cout << "f: " << f << std::endl;
    std::cout << "str: " << str << std::endl;

    return 0;

    /**
     * In this example, an istringstream object is created 
     * using the input string as the source of input data.
     * The contents of the string are then extracted using the >> operator and stored in variables.
     */
}
