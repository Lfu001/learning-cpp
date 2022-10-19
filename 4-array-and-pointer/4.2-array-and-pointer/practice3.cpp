class A {};
class B: public A {};

int main() {
    A x = A();
    B y = B();

    A* p = &y;
    p = &x;
}