#include<iostream>
using namespace std;

int main() {
    int value = 34;

    cout << sizeof(int) << endl;

    // using sizeof to fine the number of elements in an array, and then using it in loop
    
    int arr[] = {4,7,3,4};
    cout << sizeof(arr) << endl;
    cout << sizeof(int) << endl;

    // number of elements = size of array(data structure) / size of int(data type)
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        cout << arr[i] << " " << flush;

    }
    
    cout << endl;

    // sizeof multidimensional array
    string animals[2][3] = {
        {"fos", "dog", "cat"},
        {"mouse", "squirrel","parrot"}
    };

    cout << sizeof(animals) << endl;
    cout << sizeof(animals[0]) << endl;
    cout << sizeof(animals[0][0]) << endl;

    for (int i = 0; i < sizeof(animals)/sizeof(animals[0]); i++)
    {
        for (unsigned int j = 0; j < sizeof(animals[0])/sizeof(string); j++)
        {
            cout << animals[i][j] << " " << endl;
        }
        cout << endl;
    }
    

}