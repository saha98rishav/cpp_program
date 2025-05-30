#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Kadane's algorithm
    int maxSubArray(vector<int> &nums) {
        int res = nums[0], maxEnding = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            maxEnding = max(maxEnding + nums[i], nums[i]);
            res = max(maxEnding, res);
        }
        return res;
    }
};

int main() {
    vector<int> nums1 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    vector<int> nums2 = {1};
    vector<int> nums3 = {5, 4, -1, 7, 8};

    Solution soln;
    cout << soln.maxSubArray(nums1) << endl;
    cout << soln.maxSubArray(nums2) << endl;
    cout << soln.maxSubArray(nums3) << endl;
    return 0;
}