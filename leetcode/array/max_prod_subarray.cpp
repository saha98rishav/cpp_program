#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubProdArray(vector<int> &nums) {
        int left2Right = 1, right2Left = 1, i, maxProd = INT16_MIN, n = nums.size();

        for (i = 0; i < n; ++i) {
            if (left2Right == 0)
                left2Right = 1;
            if (right2Left == 0)
                right2Left = 1;

            left2Right *= nums[i];
            right2Left *= nums[n - i - 1];

            maxProd = max(maxProd, max(left2Right, right2Left));
        }
        return maxProd;
    }
};

int main() {
    vector<int> nums1 = {2, 3, -2, 4};
    vector<int> nums2 = {-2, 0, -1};
    vector<int> nums3 = {-2, 3, -4};
    vector<int> nums4 = {-2, 6, -3, -10, 0, 2};
    Solution soln;
    cout << soln.maxSubProdArray(nums1) << endl;
    cout << soln.maxSubProdArray(nums2) << endl;
    cout << soln.maxSubProdArray(nums3) << endl;
    cout << soln.maxSubProdArray(nums4) << endl;
    return 0;
}