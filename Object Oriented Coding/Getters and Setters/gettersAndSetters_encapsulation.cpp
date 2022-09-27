#include <iostream>
using namespace std;

class Employee {
private: 
    // private attribute
    int salary;
public:
    // setter
    void setSalary(int s) {
        salary = s;
    }

    // getter
    int getSalary() {
        return salary;
    }
};

int main() {
    Employee myObject;
    myObject.setSalary(1000); // setting the salary

    cout << myObject.getSalary() << endl; // getting the salary
}