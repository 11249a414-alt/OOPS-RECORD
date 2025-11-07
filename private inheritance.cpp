#include <iostream>
using namespace std;

class Base {
public:
    void displayBase() {
        cout << "Display function of Base class" << endl;
    }
};

class DerivedPrivate : private Base {
public:
    void show() {
        displayBase();
        cout << "Display function of DerivedPrivate class" << endl;
    }
};

int main() {
    DerivedPrivate obj;
    obj.show();           

    return 0;
}
