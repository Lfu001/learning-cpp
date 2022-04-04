#include <iostream>

using namespace std;

int main() {
    char name[30];
    int age;
    double weight;

    cout << "name?" << endl;
    cin >> name;
    cout << "age?" << endl;
    cin >> age;
    cout << "weight?" << endl;
    cin >> weight;

    cout << "Hi, my name is " << name << ". I'm " << age
         << " years old and weigh " << weight << " kg." << endl;
}
