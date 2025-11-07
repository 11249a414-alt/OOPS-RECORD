#include <iostream>
using namespace std;

// Function template definition
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    double p = 3.14, q = 6.28;
    char c1 = 'A', c2 = 'B';

    cout << "Before swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "p = " << p << ", q = " << q << endl;
    cout << "c1 = " << c1 << ", c2 = " << c2 << endl;

    // Using the same function template for different types
    swapValues(x, y);
    swapValues(p, q);
    swapValues(c1, c2);

    cout << "\nAfter swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "p = " << p << ", q = " << q << endl;
    cout << "c1 = " << c1 << ", c2 = " << c2 << endl;

    return 0;
}
