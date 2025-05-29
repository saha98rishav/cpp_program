#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

class Solution {
public:
    /*
    ----------------------
    Brute force approach
    ----------------------
    Create all triplets and check if nums[i] + nums[j] + nums[k] = 0
    Return the unique triplets by storing into set
    Time complexity - O(N^3)
    */
    vector<vector<int>> threeSumBruteForce(vector<int> &nums) {
        int i, j, k, sum;
        set<vector<int>> hset;

        for (i = 0; i < nums.size(); ++i) {
            for (j = i + 1; j < nums.size(); ++j) {
                for (k = j + 1; k < nums.size(); ++k) {
                    sum = nums[i] + nums[j] + nums[k];
                    if (sum == 0) {
                        vector<int> temp = {nums[i], nums[j], nums[k]};
                        sort(temp.begin(), temp.end());
                        hset.insert(temp);
                    }
                }
            }
        }

        vector<vector<int>> ans(hset.begin(), hset.end());
        return ans;
    }

    /*
    ----------------------
    Better approach
    ----------------------
    -> nums[i] + nums[j] + nums[k] = 0
    -> nums[k] = - (nums[i] + nums[j])

    Time complexity - O(N^2)
    */
    vector<vector<int>> threeSumBetter(vector<int> &nums) {
        int i, j, sum;
        set<vector<int>> hset;

        for (i = 0; i < nums.size(); ++i) {
            set<int> tset;
            for (j = i + 1; j < nums.size(); ++j) {
                int third = -(nums[i] + nums[j]);
                if (tset.find(third) != tset.end()) {
                    vector<int> temp = {nums[i], nums[j], third};
                    sort(temp.begin(), temp.end());
                    hset.insert(temp);
                }
                tset.insert(nums[j]);
            }
        }

        vector<vector<int>> ans(hset.begin(), hset.end());
        return ans;
    }

    /*
    ----------------------
    Optimal approach
    ----------------------
    Two pointer
    Sort the array first then traverse
    Time complexity - O(N)
    */
    vector<vector<int>> threeSumOptimal(vector<int> &nums) {
        int i, j, k;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for (i = 0; i < nums.size(); ++i) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            j = i + 1;
            k = nums.size() - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < 0) {
                    j++;
                } else if (sum > 0) {
                    k--;
                } else {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1])
                        j++;
                    while (j < k && nums[k] == nums[k + 1])
                        k--;
                }
            }
        }

        return ans;
    }
};

int main() {
    vector<int> nums1 = {-1, 0, 1, 2, -1, -4};
    vector<int> nums2 = {0, 1, 1};
    vector<int> nums3 = {0, 0, 0};

    Solution soln;

    vector<vector<int>> ans1 = soln.threeSumOptimal(nums1);
    for (auto num : ans1) {
        for (int i : num) {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;

    vector<vector<int>> ans2 = soln.threeSumOptimal(nums2);
    for (auto num : ans2) {
        for (int i : num) {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;

    vector<vector<int>> ans3 = soln.threeSumOptimal(nums3);
    for (auto num : ans3) {
        for (int i : num) {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}