#include <iostream>
using namespace std;

int main() {
    // Allocate single integer
    int *p = new int;      
    *p = 10;

    cout << "Value of *p: " << *p << endl;

    // Deallocate single integer
    delete p;

    // Allocate array of integers
    int *arr = new int[5];

    // Assign values
    for (int i = 0; i < 5; i++) {
        arr[i] = (i + 1) * 10;
    }

    // Display values
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deallocate array
    delete[] arr;

    cout << "Memory successfully deallocated." << endl;
