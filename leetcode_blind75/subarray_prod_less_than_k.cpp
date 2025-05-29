#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // O(n^2) and data type overflow - brute force - computing all possible subarrays
    // int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    //     long long int prod, count = 0;
    //     for (int i=0;i<nums.size();++i) {
    //         prod = nums[i];
    //         if (nums[i] < k)
    //             count++;
    //         for (int j=i+1;j<nums.size();++j) {
    //             prod *= nums[j];
    //             if (prod < k)
    //                 count++;
    //         }
    //     }
    //     return count;
    // }

    // O(n) - Sliding window
    int numSubarrayProductLessThanK(vector<int> &nums, int k) {
        if (k <= 1) return 0;

        int totalCount = 0, product = 1;

        for (int left = 0, right = 0; right < nums.size(); ++right) {
            product *= nums[right];

            while (product >= k)
                product /= nums[left++];

            totalCount += right - left + 1;
        }

        return totalCount;
    }
};

int main() {
    vector<int> nums1 = {10,5,2,6};
    vector<int> nums2 = {1,2,3};

    Solution soln;
    cout << soln.numSubarrayProductLessThanK(nums1, 100) << endl;
    cout << soln.numSubarrayProductLessThanK(nums2, 0) << endl;

    return 0;
}