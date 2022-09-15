#include <iostream>
using namespace std;

int main() {

    char text[] = "hello";
    cout << text << endl;
    
    const int elements = sizeof(text);

    char *pStart = text;
    char *pEnd = &text[elements - 2]; // pointer to point on 'o'

    cout << *pStart << endl;
    cout << *pEnd << endl;

    while (pStart != pEnd) {

        char temp = *pStart;
        *pStart = *pEnd;
        *pEnd = temp;

        pStart++;
        pEnd--;
    }

    cout << text << endl;

    return 0;
}