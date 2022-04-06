#include <iostream>

using namespace std;

class Human {
    int max_HP;
    int HP;

 public:
    Human(int x, int y): max_HP{x}, HP{y} {};

    void change_HP(int size) {
        int sum = HP + size;
        if (sum > max_HP)
            HP = max_HP;
        else if (sum < 0)
            HP = 0;
        else
            HP = sum;
    }
};

void scene1() {
    Human murabito1{10, 10};    // max_HP: 10, HP: 10
    murabito1.change_HP(25);    // HP: 10
    // murabito1.HP += 10;      // Access denied
}

int main() {
    scene1();
}