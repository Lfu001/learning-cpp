#include <iostream>

using namespace std;

int main() {
    int* v[100];
    for (int i = 0; i < sizeof(v) / sizeof(v[0]); i++)
        v[i] = nullptr;

    // Validation
    bool nullCheck = true;
    int sizeOfArray = sizeof(v) / sizeof(v[0]);
    for (int i = 0; i < sizeOfArray; i++)
        nullCheck = nullCheck && (v[i] == nullptr);

    cout << "array type: " << typeid(v).name() << endl;
    cout << "array size: " << sizeOfArray << endl;
    cout << "nullptr? " << boolalpha << nullCheck << endl;
}