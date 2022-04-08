class A {
    int a;

 public:
    A(int i): a(i) {}

    int get_a() const {
        /*
        error: cannot assign to non-static data
               member within const member function 'get_a'.
        */
        // a = 3;
        return a;
    }
};

int main() {
    A a(2);
    a.get_a();
}
