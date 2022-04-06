#include <iostream>

using namespace std;

class A {
    int a;

 public:
    A() {
        static int sn;
        a = sn++;
        cout << "A" << a << " created" << endl;
    }

    ~A() {
        cout << "A" << a << " deleted" << endl;
    }

    void print() {
        cout << "A" << a << endl;
    }
};

A g;

int main() {
    A x, y;
    { A p; }
    cout << "g = ";
    g.print();
    cout << "x = ";
    x.print();
    cout << "y = ";
    y.print();
}