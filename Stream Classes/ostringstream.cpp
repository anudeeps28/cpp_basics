#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::ostringstream ss;

    ss << 42 << ' ' << 3.14 << ' ' << "hello";

    std::string output = ss.str();

    std::cout << output << std::endl;

    /**
     * In this example, an ostringstream object is used to write data to a string. 
     * The << operator is used to write data to the stream. 
     * The str function is then used to obtain the contents of the string as a std::string object. 
     * The contents of the string are then output to the console using cout.
     */

    return 0;
}
