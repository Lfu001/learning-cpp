#include <iostream>

using namespace std;

/* Note: You must not change `get_copy` definition. */

/* Before fixing code */

// class B {
//  public:
//     int b;

//     void print() {
//         cout << b << endl;
//     }
// };

// class A {
//     B value;

//  public:
//     A(B* y): value(*y) {}

//     A get_copy() const {
//         value.print();       // error.
//         return A(&value);    // error.
//     }
// };

/* After fixing code */

class B {
 public:
    int b;

    void print() const {    // const here and...
        cout << b << endl;
    }
};

class A {
    B value;

 public:
    A(const B* y): value(*y) {}    // here.

    A get_copy() const {
        value.print();
        return A(&value);
    }
};

int main() {}