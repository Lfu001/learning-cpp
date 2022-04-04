#include <iostream>

using namespace std;

class Interval {
    double a;
    double b;

public:
    void print_interval() {
        cout << "[" << a << ", " << b << "]" << endl;
    }

    void set_interval(double x0, double x1) {
        if (!(x0 <= x1)) {
            cout << "ValueError: parameter x0 and x1 must be x0 <= x1." << endl;
        } else {
            a = x0;
            b = x1;
        }
    }

    bool is_in_interval(double x) {
        return a <= x && x <= b;
    }
};

int main() {
    Interval interval;
    interval.set_interval(1, 5);
    cout << interval.is_in_interval(2.5) << endl;
    interval.print_interval();
}