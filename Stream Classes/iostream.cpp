#include <iostream>
#include <iomanip>

int main() {
    int x;
    float f;

    std::cout << "Enter an integer and a floating-point number: ";
    std::cin >> x >> f;
    std::cout << "You entered: " << x << " and " << std::fixed << std::setprecision(2) << f << std::endl;
    // In this example, cin is used to extract input from the keyboard, and cout is used to output the result to the console.



    return 0;
}

