/*Write a class for instantiating the objects that represent the 
two-dimensional Cartesian coordinate system.
A. Make a particular member function of one class as a friend function of 
another class for addition.
B. Make the other three functions to work as a bridge between the classes 
for multiplication, division, and subtraction.
C. Also write a small program to demonstrate that all the member functions 
of one class are the friend functions of another class if the former class 
is made friend to the latter.
Make least possible classes to demonstrate all the above in a single 
program without conflict.*/
#include<iostream>
using namespace std;

class Cartesian {
    int x, y;

public:
    Cartesian() {
        x = 10;
        y = 20;
    }

    friend class Addition;
};

class Addition {
    int a, b;

public:
    Addition() {
        a = 5;
        b = 5;
    };

    void total(Cartesian& c) {
        a += c.x;
        b += c.y;
    }

    void sum();
    void diff();
    void product();
    void division();
};

void Addition::product() {
    cout << "The product is " << a * b << endl;
}

void Addition::sum() {
    cout << "The sum is " << a + b << endl;
}

void Addition::diff() {
    cout << "The difference is " << a - b << endl;
}

void Addition::division() {
    cout << "The division is " << a / b << endl;
}

int main() {
    Cartesian c;
    Addition a;
    a.total(c);
    a.sum();
    a.diff();
    a.product();
    a.division();

    return 0;
}