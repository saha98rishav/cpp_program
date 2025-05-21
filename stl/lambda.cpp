#include <iostream>
using namespace std;

int main() {
	
	// lambda function
	[]{ cout << "My name is Rishav\n"; }();

	// lambda function with return
	[](){ return 100; };

	// lambda function with return and operation
	auto sum = [](auto a, auto b){ return a+b; };
	cout << sum(8, 7) << endl;
	
	return 0;
}
