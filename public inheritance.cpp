#include <iostream>
using namespace std;

// Base class
class Base {
public:
    void displayBase() {
        cout << "Display function of Base class" << endl;
    }
};

// Derived class using PUBLIC inheritance
class DerivedPublic : public Base {
public:
    void displayDerived() {
        cout << "Display function of DerivedPublic class" << endl;
    }
};

int main() {
    DerivedPublic obj;
    obj.displayBase();     // Accessible because of PUBLIC inheritance
    obj.displayDerived();

    return 0;
}
