/*Write a program to compare two objects of a class that contains an 
integer value as its data member. Make overloading functions to overload 
equality(==), less than(<), greater than(>), not equal (!=), greater than 
or equal to (>=), and less than or equal to(<=) operators using member 
operator functions.*/
#include <iostream>

class IntegerCompare {
private:
    int value;

public:
    IntegerCompare(int val) : value(val) {}
       bool operator==(const IntegerCompare& other) const {
        return value == other.value;
    }
    bool operator<(const IntegerCompare& other) const {
        return value < other.value;
    }
    bool operator>(const IntegerCompare& other) const {
        return value > other.value;
    }
    bool operator!=(const IntegerCompare& other) const {
        return value != other.value;
    }
    bool operator>=(const IntegerCompare& other) const {
        return value >= other.value;
    }
    bool operator<=(const IntegerCompare& other) const {
        return value <= other.value;
    }
};

int main() {
    IntegerCompare num1(10);
    IntegerCompare num2(20);
    IntegerCompare num3(20);
    if (num1 == num2) {
        std::cout << "num1 is equal to num2\n";
    } else {
        std::cout << "num1 is not equal to num2\n";
    }

    if (num2 != num3) {
        std::cout << "num2 is not equal to num3\n";
    } else {
        std::cout << "num2 is equal to num3\n";
    }

    if (num1 < num2) {
        std::cout << "num1 is less than num2\n";
    } else {
        std::cout << "num1 is not less than num2\n";
    }

    if (num2 > num1) {
        std::cout << "num2 is greater than num1\n";
    } else {
        std::cout << "num2 is not greater than num1\n";
    }

    if (num3 >= num2) {
        std::cout << "num3 is greater than or equal to num2\n";
    } else {
        std::cout << "num3 is not greater than or equal to num2\n";
    }

    if (num1 <= num3) {
        std::cout << "num1 is less than or equal to num3\n";
    } else {
        std::cout << "num1 is not less than or equal to num3\n";
    }

    return 0;
}
