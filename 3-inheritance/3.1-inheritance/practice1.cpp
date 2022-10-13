#include <iostream>

using namespace std;

class Human {
 private:
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

    void rest_human() {
        HP = max_HP;
    }

    int get_HP() {
        return HP;
    }
};

class Wizard: public Human {
 private:
    int max_MP;
    int MP;

 public:
    Wizard(int max_HP, int HP, int max_MP, int MP):
        Human{max_HP, HP},
        max_MP{max_MP},
        MP{MP} {};

    void change_MP(int size) {
        int sum = MP + size;
        if (sum > max_MP)
            MP = max_MP;
        else if (sum < 0)
            MP = 0;
        else
            MP = sum;
    }

    void rest_wizard() {
        rest_human();
        MP = max_MP;
    }

    int get_MP() {
        return MP;
    }

    void print_HP_MP() {
        cout << "HP: " << get_HP() << endl;
        cout << "MP: " << get_MP() << endl;
        cout << endl;
    }
};

int main() {
    Wizard sonchou = Wizard{600, 600, 5000, 5000};
    sonchou.print_HP_MP();

    sonchou.change_MP(-1200);    // used magic
    sonchou.change_HP(-598);     // damaged
    sonchou.print_HP_MP();

    sonchou.rest_wizard();    // INN
    sonchou.print_HP_MP();
}