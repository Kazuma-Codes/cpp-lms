/*
Program to perform algebric operations using a member function methods defined within
the scope of the class definition
*/
#include <iostream>
using namespace std;

class Sample {
private:
    float x;
    float y;

public:
    // Method to get input from the user
    void input() {
        cout << "Enter two numbers: ";
        cin >> x >> y;
    }

    // Method to display results
    void display() {
        cout << "\nFirst Value: " << x;
        cout << "\nSecond Value: " << y;
        cout << "\nSum: " << sum();
        cout << "\nSubtraction: " << subtract();
        cout << "\nMultiplication: " << multiply();
        cout << "\nDivision: "<< divide();
        
    }

    // Arithmetic operations
    // they are member function
    float sum() {
        return x + y;
    }

    float subtract() {
        return x - y;
    }

    float multiply() {
        return x * y;
    }

    float divide() {
        return x / y;
    }
};

int main() {
    Sample obj;
    obj.input();
    obj.display();
    return 0;
}
