#include <iostream>

// Base class
class Base {
public:
    int value;
};

// Derived class 1
class Derived1 : public Base {
public:
    Derived1() : value(1) {}
};

// Derived class 2
class Derived2 : public Base {
public:
    Derived2() : value(2) {}
};

// Derived class inheriting from Derived1 and Derived2
class Derived : public Derived1, public Derived2 {
public:
    void display() {
        // Ambiguity when accessing 'value' from Base
        std::cout << "Value: " << value << std::endl; // Compilation error
    }
};

int main() {
    Derived obj;
    obj.display();
    return 0;
}
