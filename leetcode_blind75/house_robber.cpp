#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int rob(vector<int> &nums) {
        return 0;
    }
};

int main() {
    vector<int> nums1 = {1, 2, 3, 1};
    vector<int> nums2 = {2, 7, 9, 3, 1};
    
    Solution soln;

    cout << soln.rob(nums1) << endl;
    cout << soln.rob(nums2) << endl;

    return 0;
}