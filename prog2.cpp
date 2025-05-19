#include <iostream>
using namespace std;

class Rectangle {
    double _length;
    double _breadth;

public:
    Rectangle(double l = 0.0, double b = 0.0) {
        _length = l;
        _breadth = b;
    }

    double Area() {
        return _length * _breadth;
    }

    int compare(Rectangle rectangle) {
        return this->Area() > rectangle.Area() ? 1 : (this->Area() < rectangle.Area() ? 0 : -1);
    }
};

int main() {
    Rectangle h1(3.0, 3.0);
    Rectangle h2(2.0, 2.0);

    if (h1.compare(h2) == 1)
        cout << "H1 is bigger\n";
    else if (h1.compare(h2) == 0)
        cout << "H2 is bigger\n";
    else
        cout << "H1 and H2 are same\n";

    return 0;
}