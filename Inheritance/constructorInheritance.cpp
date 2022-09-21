#include <iostream>
using namespace std;

class Machine {
public:
    Machine() {cout << "Maehinc no-argument constructor called" << endl; }
};

class Vehicle : public Machine{ // this means that vehicle is a sub-class of Machine
public:
    Vehicle() {cout << "Vehicle" << endl;}
};

int main() {

    Vehicle vehicle;
    /**
     * @brief as Vehicle is a sub-class of Machine
     * when object of Vehicle is called, the constructor of both vehicle or machine is called
     * This is evident in the output
     */
    return 0; 
}