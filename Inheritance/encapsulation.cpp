#include <iostream>
using namespace std;

class Frog {
private: //  private instance data (variables)
    string name;
private: // private methods
    string getName() {return name;}

public: // public methods
    Frog(string name): name(name) {}
    void info() {cout << "My name is: " << getName() << endl;}
};

int main() {

    Frog frog("buddy");

    // cout << frog.getName() << endl; now we cannot do this because getname is private, if it was public, so we could do
    frog.info();

}