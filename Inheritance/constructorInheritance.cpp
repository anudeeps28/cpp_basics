#include <iostream>
using namespace std;

class Machine {
private:
    int id;
public:
    Machine(): id(0) {cout << "Maehinc no-argument constructor called" << endl; }
    void info() {cout << id<< endl;}
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

    vehicle.info(); // vehicle will inherit the method 'info' in machine class
    return 0; 
}