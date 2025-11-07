#include <iostream>
using namespace std;

// Abstract Base Class
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;

    // Non-virtual function (optional)
    void info() {
        cout << "This is a shape." << endl;
    }
};

// Derived Class 1
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle." << endl;
    }
};

// Derived Class 2
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle." << endl;
    }
};

int main() {
    // Shape s; ❌ Error: cannot create object of abstract class

    Shape* shape;     // Pointer to base class

    Circle c;
    Rectangle r;

    shape = &c;
    shape->draw();    // Calls Circle's draw()

    shape = &r;
    shape->draw();    // Calls Rectangle's draw()

    return 0;
}
