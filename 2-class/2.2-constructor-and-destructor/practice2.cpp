#include <iostream>

using namespace std;

class A {
    int a;

 public:
    A() {
        static int sn;    // static: zero initialized
        a = sn++;
    }

    void print() {
        cout << a << endl;
    }
};

int main() {
    A x;
    x.print();
}