#include <iostream>
using namespace std;

int binSearch(int *nums, int searchNum, int size) {
	int start=0, end=size-1, mid;

	while (start<=end) {
		mid = (start+end)/2;
		cout << "Start: " << start << " Mid: " << mid << " End: " << end << endl;
		if (searchNum==nums[mid])
			return mid;
		else if (searchNum<nums[mid])
			end=mid-1;
		else if (searchNum>nums[mid])
			start=mid+1;
	}
	return -1;
}

int main() {
	const int size=9;
	int nums[size] = {3, 5, 6, 8, 9, 10, 12, 15, 16};
	int searchNum;
	cout << "Enter number to search: ";
	cin >> searchNum;
	int res=binSearch(nums, searchNum, size);
	if (res!=-1)
		cout << searchNum << " found at index " << res << "\n";
	else
		cout << searchNum << " not found\n";
	return 0;
}
