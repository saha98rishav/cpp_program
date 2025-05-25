#include <iostream>
using namespace std;


int partition(int *arr, int low, int high) {
	// Take the first element of the array as pivot
	int pivot = arr[low];
	int i = low, j = high, tmp;

	while (i < j) {
		do {
			i++;
		} while (arr[i] <= pivot);

		do {
			j--;
		} while (arr[j] > pivot);

		if (i < j)
			swap(*(arr+i), *(arr+j));
	}
	swap(*(arr+low), *(arr+j));
	return j;
}

void quickSort(int *arr, int low, int high) {
	int j;
	if (low < high) {
		j = partition(arr, low, high);
		quickSort(arr, low, j);
		quickSort(arr, j+1, high);
	}
}


int main() {
	const int size = 9;
	int arr[size] = {10, 16, 8, 12, 15, 6, 3, 9, 5};

	cout << "Before sorting\n";
	for (int i=0;i<size;++i)
		cout << arr[i] << " ";
	cout << endl;

	quickSort(arr, 0, size+1);
	
	cout << "After sorting\n";

	for (int i=0;i<size;++i)
		cout << arr[i] << " ";
	cout << endl;

	return 0;
}
