#include <algorithm> // for std::sort
#include <iostream>  // for std::cout

template <typename T>
void sortArray(T arr[], int size) {
    std::sort(arr, arr + size);
}

int main() {
    // Test with int array
    int intArr[] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };
    int sizeIntArr = sizeof(intArr) / sizeof(int);
    sortArray(intArr, sizeIntArr);
    std::cout << "Sorted int array: ";
    for (int i = 0; i < sizeIntArr; i++) {
        std::cout << intArr[i] << " ";
    }
    std::cout << std::endl;

    // Test with double array
    double doubleArr[] = { 3.14, 1.41, 2.71, 0.62, 1.73 };
    int sizeDoubleArr = sizeof(doubleArr) / sizeof(double);
    sortArray(doubleArr, sizeDoubleArr);
    std::cout << "Sorted double array: ";
    for (int i = 0; i < sizeDoubleArr; i++) {
        std::cout << doubleArr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
