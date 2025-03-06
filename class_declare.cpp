#include <iostream>
#include <string>

class Helo {
private:
    int x;
    std::string y;
    int z;

public:
    void values(int a, std::string b, int c);
    void display();
};

void Helo::values(int a, std::string b, int c) {
    x = a;
    y = b;
    z = c;
}

void Helo::display() {
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "z: " << z << std::endl;
}

int main() {
    Helo a1;
    a1.values(10, "faf", 12);
    a1.display();

    return 0;
}