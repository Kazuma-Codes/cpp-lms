#include <iostream>
using namespace std;

// Class Definition
class emp {
public:
    int empid;
    char name[15];

    // Nested Class Definition

        int day, month, year;
    // Declaring an object of the nested class `data`
};

int main() {
    emp e; // Declaring an object of class `emp`

    // Input Employee Details
    cout << "Enter employee ID: ";
    cin >> e.empid;

    cout << "Enter employee name: ";
    cin >> e.name;

    cout << "Enter date of joining (day): ";
    cin >> e.day;

    cout << "Enter month of joining: ";
    cin >> e.month;

    cout << "Enter year of joining: ";
    cin >> e.year;

    // Output Employee Details
    cout << "\nEmployee ID: " << e.empid << endl;
    cout << "Employee Name: " << e.name << endl;
    cout << "Date of Joining: " << e.day << "-" << e.month << "-" << e.year << endl;

    return 0;
}
