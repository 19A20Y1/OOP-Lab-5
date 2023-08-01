/*Write a class to store x, y, and z coordinates of a point in 
three-dimensional space. Overload addition and subtraction operators for 
addition and subtraction of two coordinate objects. Implement the operator 
functions as non-member functions (friend operator functions).*/
#include <iostream>
using namespace std;
class Coordinate3D {
private:
    double x;
    double y;
    double z;

public:
    Coordinate3D(double x_val = 0.0, double y_val = 0.0, double z_val = 0.0)
        : x(x_val), y(y_val), z(z_val) {}
    friend Coordinate3D operator+(const Coordinate3D& p1, const Coordinate3D& p2);
    friend Coordinate3D operator-(const Coordinate3D& p1, const Coordinate3D& p2);
    double getX() const { return x; }
    double getY() const { return y; }
    double getZ() const { return z; }
};                     
Coordinate3D operator+(const Coordinate3D& p1, const Coordinate3D& p2) {
    return Coordinate3D(p1.x + p2.x, p1.y + p2.y, p1.z + p2.z);
}
Coordinate3D operator-(const Coordinate3D& p1, const Coordinate3D& p2) {
    return Coordinate3D(p1.x - p2.x, p1.y - p2.y, p1.z - p2.z);
}

int main() {
    Coordinate3D point1(3.0, 5.0, 2.0);
    Coordinate3D point2(2.0, 7.0, 1.0);

    Coordinate3D resultAdd = point1 + point2;
    Coordinate3D resultSubtract = point1 - point2;

    cout << "Point 1: (" << point1.getX() << ", " << point1.getY() << ", " << point1.getZ() << ")\n";
    cout << "Point 2: (" << point2.getX() << ", " << point2.getY() << ", " << point2.getZ() << ")\n";
    cout << "Addition: (" << resultAdd.getX() << ", " << resultAdd.getY() << ", " << resultAdd.getZ() << ")\n";
    cout << "Subtraction: (" << resultSubtract.getX() << ", " << resultSubtract.getY() << ", " << resultSubtract.getZ() << ")\n";

    return 0;
}
