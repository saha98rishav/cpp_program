#include <iostream>
#include <map>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    /*
        bool containsDuplicate(vector<int> &nums) {
            map<int, int> hmap;
            for (int i : nums) {
                if (hmap.find(i) != hmap.end())
                    return true;
                else
                    hmap[i] = 1;
            }
            return false;
        }
    */

    bool containsDuplicate(vector<int> &nums) {
        unordered_set<int> mset;

        for (int i : nums) {
            mset.insert(i);
        }

        return nums.size() != mset.size();
    }
};

int main() {
    vector<int> nums1 = {1, 2, 3, 1};
    vector<int> nums2 = {1, 2, 3, 4};
    vector<int> nums3 = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};

    Solution soln;
    cout << soln.containsDuplicate(nums1) << endl;
    cout << soln.containsDuplicate(nums2) << endl;
    cout << soln.containsDuplicate(nums3) << endl;
    return 0;
}