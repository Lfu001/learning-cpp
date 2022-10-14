#include <iostream>

using namespace std;

class A {
    int a, b;

 public:
    A(): a(0), b(0) {}
    A(int x): a(x), b(x) {}
    A(int x, int y): a(x), b(y) {}
    A(int* p): a(*p), b(*p) {}

    void print_a_b() {
        cout << "(" << a << ", " << b << ")";
    }
};

int main() {
    A p[128];
    int x = 5;
    A u[8] = {A(), A(5), A(2, 3), 3, &x};
    A v[8] = {};
    A w[] = {A(), A(5), A(2, 3), 3, &x};

    cout << "p: [";
    for (auto& e: p)
        e.print_a_b();
    cout << "]" << endl;

    cout << "u: [";
    for (auto& e: u)
        e.print_a_b();
    cout << "]" << endl;

    cout << "v: [";
    for (auto& e: v)
        e.print_a_b();
    cout << "]" << endl;

    cout << "w: [";
    for (auto& e: w)
        e.print_a_b();
    cout << "]" << endl;
}
