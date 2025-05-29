#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMin(vector<int> &nums) {
        int minNum = INT32_MAX;
        int l = 0, r = nums.size() - 1, m;

        while (l <= r) {
            m = (l + r) / 2;
            if (nums[m] >= nums[l]) {
                minNum = min(minNum, nums[l]);
                l = m + 1;
            } else {
                r = m - 1;
                minNum = min(minNum, nums[m]);
            }
        }
        return minNum;
    }
};

int main() {
    vector<int> nums1 = {3, 4, 5, 1, 2};
    vector<int> nums2 = {4, 5, 6, 7, 0, 1, 2};
    vector<int> nums3 = {11, 13, 15, 17};
    Solution soln;
    cout << soln.findMin(nums1) << endl;
    cout << soln.findMin(nums2) << endl;
    cout << soln.findMin(nums3) << endl;
    return 0;
}