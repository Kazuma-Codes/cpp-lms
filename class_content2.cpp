#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name = "John Doe";  // Predefined value
    int age = 20;             // Predefined value

protected:
    string department = "Computer Science"; // Predefined value

public:
    // Function to display the details
    void displayDetails() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Department: " << department << endl;
    }

    // Function to change details if needed
    void setDetails(const string& studentName, int studentAge, const string& studentDepartment) {
        name = studentName;
        age = studentAge;
        department = studentDepartment;
    }
};

int main() {
    Student student;

    // Display the predefined details
    cout << "Predefined Student Details:" << endl;
    student.displayDetails();

    // Optionally update details
    cout << "\nUpdating Student Details..." << endl;
    student.setDetails("Alice Smith", 22, "Mechanical Engineering");

    // Display updated details
    cout << "\nUpdated Student Details:" << endl;
    student.displayDetails();

    return 0;
}
