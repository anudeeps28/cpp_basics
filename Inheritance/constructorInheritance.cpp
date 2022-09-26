#include <iostream>
using namespace std;

class Machine {
private:
    int id;
public:
    Machine(): id(0) {cout << "Machine no-argument constructor called" << endl; } // non - paramatrized constructor
    Machine(int id): id(id) {cout << "Machine paramatrized constructor called" << endl; } // paramatrized constructor
    void info() {cout << id << endl;}
};

class Vehicle : public Machine{ // this means that vehicle is a sub-class of Machine
public:
     
    Vehicle(int id): Machine(id) {cout << "Machine paramatrized constructor called" << endl; } // telling Vehicle constructor that it will run Machine paramatrized constructor for id
    Vehicle() {cout << "Vehicle" << endl;}
};

class Car : public Vehicle { // Car is a subclass of Vehicle
public:
    //Car() {cout << "Car no-argument constructor called" << endl;} // you can use this constrctor also
    Car(): Vehicle(999){} // this will call Vehicle paramatrized constructor
    // we cannot do Car(): Machine(999) (cannot call indirect superclass constructor)
};

int main() {

    Vehicle vehicle;
    /**
     * @brief as Vehicle is a sub-class of Machine 
     * when object of Vehicle is called, the constructor of both vehicle or machine is called
     * This is evident in the output
     */

    vehicle.info(); // vehicle will inherit the method 'info' in machine class

    /**
     * @brief We cannot use the method 'info' inside Vehicle class
     * but we CAN, use the method by calling it as a method of the parent class
     */


    Car car; // this will call all the constructors!
    car.info();
    return 0; 

    // we can choose which constructor to run
    Vehicle vehicle3(123);
    vehicle3.info();

    Car car2;
    car2.info();
    
} 