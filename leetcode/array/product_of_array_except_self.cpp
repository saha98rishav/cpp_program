#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Brute Force approach: iterating in nested way to calculate products - O(n^2)
    vector<int> productExceptSelfBruteForce(vector<int> &nums) {
        int i, j, prod;
        vector<int> res;

        for (i = 0; i < nums.size(); ++i) {
            j = 0;
            prod = 1;
            while (j < nums.size()) {
                if (j != i)
                    prod *= nums[j];
                ++j;
            }
            res.push_back(prod);
        }

        return res;
    }

    // Better approach
    // ---------------
    // create prefix and postfix array,
    // then multiply the prefix and postfix arrays to calculate products.
    // nums =       [1, 2, 3, 4]
    // prefix =     [1, 1, 2, 6]
    // postfix =    [24, 12, 4, 1]
    // result =     [24, 12, 8, 6]
    // Time complexity = O(3n) = O(n)
    // Space complexity = O(3n) = O(n)

    // Optimal approach
    // -----------------
    // calculate the prefix and postfix array in the same result array.
    // Traverse once from left side and once from the right side
    // Time complexity = O(2n) = O(n)
    // Space complexity = O(n) = O(n)

    vector<int> productExceptSelfOptimal(vector<int> &nums) {
        int i, pre = 1, post = 1;
        vector<int> res(nums.size());
        res.assign(res.size(), 1);

        // prefix
        for (i = 0; i < nums.size(); ++i) {
            res[i] = pre;
            pre *= nums[i];
        }

        // postfix
        for (i = nums.size() - 1; i >= 0; --i) {
            res[i] *= post;
            post *= nums[i];
        }
        return res;
    }
};

int main() {
    vector<int> nums1 = {1, 2, 3, 4};
    vector<int> nums2 = {-1, 1, 0, -3, 3};

    Solution soln;
    vector<int> res;

    res = soln.productExceptSelfOptimal(nums1);
    for (int i : res)
        cout << i << " ";
    cout << endl;

    res = soln.productExceptSelfOptimal(nums2);
    for (int i : res)
        cout << i << " ";
    cout << endl;

    return 0;
}