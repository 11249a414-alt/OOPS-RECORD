#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(T1 a, T2 b) : first(a), second(b) {}

    void display() const {
        cout << "First: " << first << ", Second: " << second << endl;
    }

    T1 getFirst() const { return first; }
    T2 getSecond() const { return second; }
};

int main() {
    Pair<int, double> p1(10, 15.75);
    Pair<string, int> p2("Age", 25);

    cout << "Pair 1 -> ";
    p1.display();

    cout << "Pair 2 -> ";
    p2.display();

    return 0;
}
