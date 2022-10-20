#include <iostream>

using namespace std;

int main() {
    const int x = 3, y = 5, z = 7;

    const int* vars[] = {&x, &y, &z};

    const int** p = vars;
    for (int i = 0; i < sizeof(vars) / sizeof(vars[0]); i++) {
        cout << **p << endl;
        p++;
    }
}