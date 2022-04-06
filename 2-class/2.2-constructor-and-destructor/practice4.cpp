#include <iostream>

using namespace std;

int num_of_A;

class A {
    int a;

 public:
    A() {
        num_of_A++;
        static int sn;
        a = sn++;
        cout << "A" << a << " created" << endl;
        print_num_of_A();
    }

    ~A() {
        num_of_A--;
        cout << "A" << a << " deleted" << endl;
        print_num_of_A();
    }

    void print() {
        cout << "A" << a << endl;
    }

    void print_num_of_A() {
        cout << "The number of A objects is " << num_of_A << "." << endl;
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
