#include <iostream>
#include <strstream>

int main() {
    char buffer[100];
    std::ostrstream ss(buffer, 100);

    ss << "Hello, World!" << std::ends;

    std::cout << buffer << std::endl;

    return 0;

    // In this example, strstream is used to write data to a character buffer. 
    // The ostrstream class is used for output operations, and the ends manipulator is used to null-terminate the string stored in the buffer. 
    // The contents of the buffer are then output to the console using cout.


}
