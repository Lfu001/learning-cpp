#include <iostream>

using namespace std;

int main() {
    char name[30];
    int age;
    double weight;

    cout << "name, age, weight?" << endl;
    cin >> name >> age >> weight;

    cout << "Hi, my name is " << name << ". I'm " << age
         << " years old and weigh " << weight << " kg." << endl;
}
