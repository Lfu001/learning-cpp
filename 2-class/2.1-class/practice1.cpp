#include <iostream>

using namespace std;


class A {
    int a;

   public:
    int b;
    void set_a(int n);
    int get_a();
};


void A::set_a(int n) {
    a = n;
}


int A::get_a() {
    return a;
}


int main() {
    A x;
    x.set_a(3);
    cout << x.get_a() << endl;
}
