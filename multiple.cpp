#include <iostream>
using namespace std;

// Base class 1
class Teacher {
protected:
    string subject;

public:
    void setSubject(string s) {
        subject = s;
    }

    void displayTeacherInfo() {
        cout << "Subject: " << subject << endl;
    }
