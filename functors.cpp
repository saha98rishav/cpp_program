#include <iostream>
using namespace std;


class MyFloat {
	float ft;
	public:
	MyFloat() {
		ft = 0.1;
	}
	void getValue() {
		cout << ft << endl;
	}
	// () operator overloading
	template<typename T>
	void operator ()(T v) {
		ft += v;
	}

};

int main() {

	MyFloat floaty;
	floaty.getValue();

	floaty(1);
	floaty.getValue();

	floaty(1.3);
	floaty.getValue();

	floaty(2);
	floaty.getValue();

	return 0;
}
