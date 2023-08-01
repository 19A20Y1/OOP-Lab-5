/*Write a class Date that overloads prefix and postfix operators to 
increase the Date object by one day, while causing appropriate increments 
to the month and year (use the appropriate condition for leap year). The 
prefix and postfix operators in the Date class should behave exactly like 
the built-in increment operators.*/
#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    // Prefix increment operator (++Date)
    Date& operator++() {
        incrementDate();
        return *this;
    }

    // Postfix increment operator (Date++)
    Date operator++(int) {
        Date temp = *this;
        incrementDate();
        return temp;
    }

    // Function to check if the year is a leap year
    bool isLeapYear(int y) const {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }

    // Function to check the number of days in a given month and year
    int daysInMonth(int m, int y) const {
    static const int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (m == 2) {
        if (isLeapYear(y))
            return 29;
        else
            return 28;
    }
    return days[m];
    }

    // Function to increment the date by one day
    void incrementDate() {
        day++;
        if (day > daysInMonth(month, year)) {
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
    }

    // Function to display the date in the format: dd/mm/yyyy
    void displayDate() const {
        std::cout<< day << "/"<< month << "/" << year << std::endl;
    }
};

int main() {
    Date date1(31, 12, 2022);

    std::cout << "Original date: ";
    date1.displayDate();

    // Prefix increment
    ++date1;
    std::cout << "Date after prefix increment: ";
    date1.displayDate();

    // Postfix increment
    date1++;
    std::cout << "Date after postfix increment: ";
    date1.displayDate();

    return 0;
}
