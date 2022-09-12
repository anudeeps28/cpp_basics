#include <iostream>
using namespace std;

int main()
{

    int var_name = 10; // allocate me some memory for storing a variable that has the value 10 in the computer memory with the label 'var_name'

    // we can have multiple variables in a program
    int var_2 = 20;

    cout << "Variable Name: " << var_name << endl;
    cout << var_2 << endl;

    int var_3 = var_2 + 20;
    cout << var_3;
    return 0;
}