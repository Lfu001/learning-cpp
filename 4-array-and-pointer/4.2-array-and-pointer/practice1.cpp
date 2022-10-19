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

    // Access elements by index
    cout << "p: [";
    for (int i = 0; i < (sizeof(p) / sizeof(typeid(p).name())); i++)
        p[i].print_a_b();
    cout << "]" << endl;

    cout << "u: [";
    for (int i = 0; i < (sizeof(u) / sizeof(typeid(u).name())); i++)
        u[i].print_a_b();
    cout << "]" << endl;

    // Access elements by pointer
    cout << "v: [";
    for (int i = 0; i < (sizeof(v) / sizeof(typeid(v).name())); i++)
        (v + i)->print_a_b();
    cout << "]" << endl;

    cout << "w: [";
    for (int i = 0; i < (sizeof(w) / sizeof(typeid(w).name())); i++)
        (w + i)->print_a_b();
    cout << "]" << endl;
}
