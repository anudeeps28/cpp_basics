#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{
    float fValue = 6.7;

    cout << fixed << fValue << endl; // displaying in decimal form
    cout << scientific << fValue << endl; // displaying in engineering form 

    cout << setprecision(20) << fixed << fValue << endl;

    double dValue = 6.7; // double can store values to higher significant digits
    cout << setprecision(20) << fixed << dValue << endl;

    cout << sizeof(float);
    cout << sizeof(double);
    cout << sizeof(long double);

    return 0;
}