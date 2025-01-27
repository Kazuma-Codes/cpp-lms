#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;  // Private members are accessible only within the class
    int age;

protected:
    string department;  // Protected members are accessible within the class and derived classes

public:
    // Public member functions for input and display
    void setDetails(const string& studentName, int studentAge, const string& studentDepartment) {
        name = studentName;
        age = studentAge;
        department = studentDepartment;
    }

    void displayDetails() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Student student;

    // Input details
    string name, department;
    int age;

    cout << "Enter student's name: ";
    getline(cin, name);

    cout << "Enter student's age: ";
    cin >> age;
    cin.ignore(); // To handle newline character in the input buffer

    cout << "Enter student's department: ";
    getline(cin, department);

    // Set details using the public function
    student.setDetails(name, age, department);

    // Display details
    cout << "\nStudent Details:" << endl;
    student.displayDetails();

    return 0;
}
