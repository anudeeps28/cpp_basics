#include<iostream>

using namespace std;

// .hpp header file
class Test {
public:
    static int const MAX = 99;
private: 
    int id;
    static int count; // although variables are private, we are taking this just for the example
public:
    Test() {
        id = count++;
    }

    int getId() {
        return id;
    }

    static void showInfo() {
        cout << count << endl;
    }    

};

// .cpp source file
int Test::count = 7;

int main() {
    Test::showInfo();

    Test test1;
    cout << "Object 1 ID: " << test1.getId() << endl;

    Test test2;
    cout << "Object 2 ID: " << test2.getId() << endl;


}