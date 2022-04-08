#include <iostream>

using namespace std;

class B {
 public:
    int b;
    void print() {
        cout << b << "\n";
    }
};
class A {
    // B value;         // this causes errors below but
    mutable B value;    // this does not.

 public:
    A(B* y): value(*y) {}

    A get_copy() const {
        value.print();       // this is error if `value` is not mutable.
        return A(&value);    // this is error if `value` is not mutable.
    }
};

int main() {}