// Problem 1: Vector addition and subtraction

#include <iostream>

class Vector {
public:
  // Vector(double x, double y, double z) : x(x), y(y), z(z) {}
  Vector(double x, double y, double z){ // constructor
    this->x = x;
    this->y = y;
    this->z = z;
  } 

  Vector operator+(const Vector& other) const {
    return Vector(x + other.x, y + other.y, z + other.z);
  }

  Vector operator-(const Vector& other) const {
    return Vector(x - other.x, y - other.y, z - other.z);
  }

  void print() const {
    std::cout << "(" << x << ", " << y << ", " << z << ")\n";
  }

private:
  double x, y, z;
};

int main() {
  Vector v1(1, 2, 3);
  Vector v2(4, 5, 6);

  std::cout << "v1 = ";
  v1.print();

  std::cout << "v2 = ";
  v2.print();

  Vector v3 = v1 + v2;
  std::cout << "v1 + v2 = ";
  v3.print();

  Vector v4 = v1 - v2;
  std::cout << "v1 - v2 = ";
  v4.print();

  return 0;
}
