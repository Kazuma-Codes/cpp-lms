/*
Write a program to demonstrate the concept of all types of inheritance.
a) Single inheritance
b) Multiple inheritance
c) Multilevel inheritance
d) Hierarchical Inheritance
e) Hybrid Inheritance
*/

#include <iostream>
using namespace std;

// Single Inheritance
class BaseSingle {
public:
    void displaySingle() {
        cout << "Single Inheritance: Base class method called.\n";
    }
};

class DerivedSingle : public BaseSingle {
public:
    void displayDerivedSingle() {
        cout << "Single Inheritance: Derived class method called.\n";
    }
};

// Multiple Inheritance
class Base1 {
public:
    void showBase1() {
        cout << "Multiple Inheritance: Base1 class method called.\n";
    }
};

class Base2 {
public:
    void showBase2() {
        cout << "Multiple Inheritance: Base2 class method called.\n";
    }
};

class DerivedMultiple : public Base1, public Base2 {
public:
    void showDerivedMultiple() {
        cout << "Multiple Inheritance: Derived class method called.\n";
    }
};

// Multilevel Inheritance
class BaseMultilevel {
public:
    void displayBaseMultilevel() {
        cout << "Multilevel Inheritance: Base class method called.\n";
    }
};

class Intermediate : public BaseMultilevel {
public:
    void displayIntermediate() {
        cout << "Multilevel Inheritance: Intermediate class method called.\n";
    }
};

class DerivedMultilevel : public Intermediate {
public:
    void displayDerivedMultilevel() {
        cout << "Multilevel Inheritance: Derived class method called.\n";
    }
};

// Hierarchical Inheritance
class BaseHierarchical {
public:
    void showBaseHierarchical() {
        cout << "Hierarchical Inheritance: Base class method called.\n";
    }
};

class DerivedHierarchical1 : public BaseHierarchical {
public:
    void showDerivedHierarchical1() {
        cout << "Hierarchical Inheritance: Derived1 class method called.\n";
    }
};

class DerivedHierarchical2 : public BaseHierarchical {
public:
    void showDerivedHierarchical2() {
        cout << "Hierarchical Inheritance: Derived2 class method called.\n";
    }
};

// Hybrid Inheritance
class BaseHybrid {
public:
    void showBaseHybrid() {
        cout << "Hybrid Inheritance: Base class method called.\n";
    }
};

class IntermediateHybrid1 : virtual public BaseHybrid {
public:
    void showIntermediateHybrid1() {
        cout << "Hybrid Inheritance: Intermediate1 class method called.\n";
    }
};

class IntermediateHybrid2 : virtual public BaseHybrid {
public:
    void showIntermediateHybrid2() {
        cout << "Hybrid Inheritance: Intermediate2 class method called.\n";
    }
};

class DerivedHybrid : public IntermediateHybrid1, public IntermediateHybrid2 {
public:
    void showDerivedHybrid() {
        cout << "Hybrid Inheritance: Derived class method called.\n";
    }
};

int main() {
    // Single Inheritance
    DerivedSingle objSingle;
    objSingle.displaySingle();
    objSingle.displayDerivedSingle();

    cout << "\n";

    // Multiple Inheritance
    DerivedMultiple objMultiple;
    objMultiple.showBase1();
    objMultiple.showBase2();
    objMultiple.showDerivedMultiple();

    cout << "\n";

    // Multilevel Inheritance
    DerivedMultilevel objMultilevel;
    objMultilevel.displayBaseMultilevel();
    objMultilevel.displayIntermediate();
    objMultilevel.displayDerivedMultilevel();

    cout << "\n";

    // Hierarchical Inheritance
    DerivedHierarchical1 objHierarchical1;
    objHierarchical1.showBaseHierarchical();
    objHierarchical1.showDerivedHierarchical1();

    DerivedHierarchical2 objHierarchical2;
    objHierarchical2.showBaseHierarchical();
    objHierarchical2.showDerivedHierarchical2();

    cout << "\n";

    // Hybrid Inheritance
    DerivedHybrid objHybrid;
    objHybrid.showBaseHybrid();
    objHybrid.showIntermediateHybrid1();
    objHybrid.showIntermediateHybrid2();
    objHybrid.showDerivedHybrid();

    return 0;
}
