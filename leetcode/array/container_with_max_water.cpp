#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxAreaBruteForce(vector<int> &height) {
        int maxWtr = INT32_MIN, n = height.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int w = j - i;
                int h = min(height[i], height[j]);
                int currWtr = w * h;
                maxWtr = max(maxWtr, currWtr);
            }
        }
        return maxWtr;
    }

    int maxAreaOptimal(vector<int> &height) {
        int maxWtr = INT32_MIN, n = height.size();
        int i = 0, j = n - 1, w, ht;
        while (i < j) {
            w = j - i;
            ht = min(height[i], height[j]);
            maxWtr = max(maxWtr, (ht * w));

            height[i] < height[j] ? i++ : j--;
        }
        return maxWtr;
    }
};

int main() {
    vector<int> nums1 = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    vector<int> nums2 = {1, 1};

    Solution soln;
    cout << soln.maxAreaOptimal(nums1) << endl;
    cout << soln.maxAreaOptimal(nums2) << endl;
    return 0;
}