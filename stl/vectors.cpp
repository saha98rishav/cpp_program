#include <iostream>
#include <ostream>
#include <vector>
using namespace std;

struct Corners {
	float a, b, c, d;
};

// "<<" operator overwritten to stream out values
ostream &operator<<(ostream &stream, const Corners &corner) {
	stream << corner.a << " " << corner.b << " " << corner.c << " " << corner.d;
	return stream;
}

int main() {

	vector<int> inty;
	inty.push_back(1);
	inty.push_back(2);
	inty.push_back(3);
	inty.push_back(4);
	inty.push_back(5);
	inty.push_back(6);
	inty.push_back(7);
	inty.push_back(8);

	for (auto i=inty.begin(); i!=inty.end(); ++i) {
		cout << *i <<  endl;
	}

	vector<Corners> corners;
	corners.push_back({1, 2, 3, 4});
	corners.push_back({5, 6, 7, 8});

	for (int i=0; i<corners.size(); ++i) {
		cout << corners[i] << endl;
	}

	return 0;
}
