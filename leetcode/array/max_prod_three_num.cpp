#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void combinationUntil(int ind, int r, vector<int> &data, vector<vector<int>> &res, vector<int> &nums) {
        int n = nums.size();

        // if current combination size is equal to r
        if (data.size() == r) {
            res.push_back(data);
            return;
        }

        for (int i = ind; i < n; ++i) {
            // include current element
            data.push_back(nums[i]);

            // recur for next element
            combinationUntil(i + 1, r, data, res, nums);

            // backtrack for other combination
            data.pop_back();
        }
    }

    vector<vector<int>> findCombination(vector<int> &nums, int r) {
        vector<vector<int>> res; // to store the combinations
        vector<int> data;        // store temporary results
        int n = nums.size();

        combinationUntil(0, 3, data, res, nums);
        return res;
    }

    long int maximumProduct(vector<int> &nums) {
        long int maxProd = INT32_MIN, currProd;

        vector<vector<int>> res = findCombination(nums, 3);
        for (auto i : res) {
            currProd = 1;
            for (int j : i) {
                currProd *= j;
            }
            maxProd = max(maxProd, currProd);
        }
        return maxProd;
    }
};

int main() {
    vector<int> nums1 = {1, 2, 3};
    vector<int> nums2 = {1, 2, 3, 4};
    vector<int> nums3 = {-1, -2, -3};
    vector<int> nums4 = {-1000, -1000, -1000};

    Solution soln;

    cout << soln.maximumProduct(nums1) << endl;
    cout << soln.maximumProduct(nums2) << endl;
    cout << soln.maximumProduct(nums3) << endl;
    cout << soln.maximumProduct(nums4) << endl;

    return 0;
}