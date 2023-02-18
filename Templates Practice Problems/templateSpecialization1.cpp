#include <iostream>

template<typename T>
void print(T value)
{
    std::cout << value << std::endl;
}

// Specialization for bool
template<>
void print(bool value)
{
    if (value)
    {
        std::cout << "The value is true" << std::endl;
    }
    else
    {
        std::cout << "The value is false" << std::endl;
    }
}

int main()
{
    print(42);
    print("Hello, world!");
    print(true);
    print(false);
    print(3.14);
    return 0;
}
