#include <iostream>
using namespace std;

int main() {
	const int size = 9;
	int arr[size] = {10, 16, 8, 12, 15, 6, 3, 9, 5};

	cout << "Before sorting\n";

	for (int i=0;i<size;++i)
		cout << arr[i] << " ";
	cout << endl;

	cout << "After sorting\n";

	int i, j, tmp;
	bool swapped;

	for (i=0;i<size-1;++i) {
		swapped=false;
		for (j=i+1;j<size;++j) {
			if (arr[j] < arr[i]) {
				tmp=arr[j];
				arr[j]=arr[i];
				arr[i]=tmp;
				swapped=true;
			}
		}
		if (!swapped)
			break;
	}

	for (int i=0;i<size;++i)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}
