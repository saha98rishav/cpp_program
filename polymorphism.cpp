#include <iostream>
using namespace std;

class One {
public:
    void intro() {
        cout << "I am One\n";
    }
};

class Two : public One {
public:
    void intro() {
        cout << "I am Two\n";
    }
};

class Three : public One {
public:
    void intro() {
        cout << "I am Three\n";
    }
};

int main() {
    One a;
    Two b;
    Three c;

    a.intro();
    b.intro();
    c.intro();

    return 0;
}