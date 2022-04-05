#include <iostream>

using namespace std;

class A {
    int a;

 public:
    A() {
        cout << "Constructor A() called." << endl;
        // a = 0;    // a == 1 before initialized.
        a = 0;
    }

    void print() {
        cout << a << endl;
    }
};

int main() {
    A x;
    x.print();
}