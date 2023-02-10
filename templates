#include <iostream>
#include <vector>

template <typename T>
class Stack {
    std::vector<T> elements;

public:
    void push(T const& element) {
        elements.push_back(element);
    }

    void pop() {
        if (elements.empty()) {
            std::cerr << "Error: Stack is empty" << std::endl;
            return;
        }
        elements.pop_back();
    }

    T top() const {
        if (elements.empty()) {
            std::cerr << "Error: Stack is empty" << std::endl;
            return T();
        }
        return elements.back();
    }

    bool empty() const {
        return elements.empty();
    }
};

int main() {
    Stack<int> intStack;
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);

    while (!intStack.empty()) {
        std::cout << intStack.top() << ' ';
        intStack.pop();
    }
    std::cout << std::endl;

    Stack<float> floatStack;
    floatStack.push(1.1f);
    floatStack.push(2.2f);
    floatStack.push(3.3f);

    while (!floatStack.empty()) {
        std::cout << floatStack.top() << ' ';
        floatStack.pop();
    }
    std::cout << std::endl;

    return 0;
}
