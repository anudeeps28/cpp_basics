#include <iostream>

int main() {
    try {
        int x = 10;
        int y = 0;
        if (y == 0) {
            throw "Division by zero!";
        }
        int z = x / y;
        std::cout << "The result is " << z << std::endl;
    } catch (const char* message) {
        std::cerr << "Error: " << message << std::endl;
    }
    return 0;
}
