#include <iostream>

using namespace std;

class A {
    int a;

 public:
    void print_address() {
        cout << this << endl;
    };
};

int main() {
    A x, y;

    cout << "x:" << endl << &x << endl;
    x.print_address();
    cout << "y:" << endl << &y << endl;
    y.print_address();
}