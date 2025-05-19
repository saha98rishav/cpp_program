#include <iostream>
#include <string>
using namespace std;

class Phone {
    string _name = "";
    string _os = "";
    int _price = 0;

public:
    Phone();                                                       // default constructor
    Phone(const string &name, const string &os, const int &price); // paramterized constructor
    Phone(const Phone &);                                          // copy constructor
    string getName() { return _name; };                            // getter
    void setName(const string &name) { _name = name; };
    ~Phone(); // destructor
};

Phone::Phone() : _name(), _os(), _price() {
    puts("Default");
}

Phone::Phone(const string &name, const string &os, const int &price) : _name(name), _os(os), _price(price) {
    puts("Parameter");
}

Phone::Phone(const Phone &values) {
    puts("Overwritten Copy");
    _name = values._name;
    _os = "Skinned-" + values._os;
    _price = values._price;
}

Phone::~Phone() {
    cout << "Destructor called for " << _name << endl;
}

int main() {
    Phone samsungA1;
    samsungA1.setName("samsungA1");
    cout << samsungA1.getName() << endl;

    Phone oneplus8("OP8", "Android-Oxygen", 899);
    cout << oneplus8.getName() << endl;

    Phone oneplus8s = oneplus8;
    cout << oneplus8s.getName() << endl;

    return 0;
}