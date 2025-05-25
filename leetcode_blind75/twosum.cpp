#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    /*
       vector<int> twoSum(vector<int> &nums, int target) {
       vector<int> indices;
       int i, j;

       for (i=0; i<nums.size()-1; ++i) {
       for (j=i+1; j<nums.size(); ++j) {
       if (nums[i] + nums[j] == target) {
       indices.push_back(i);
       indices.push_back(j);
       break;
       }
       }
       }
       return indices;

       }
       int partition(vector<int> &nums, int low, int high) {
       int pivot=nums[low];
       int i=low, j=high, tmp;

       while (i<j) {
       do {
       i++;
       } while (nums[i] <= pivot);

       do {
       j--;
       } while (nums[j] > pivot);

       if (i<j)
       swap(nums[i], nums[j]);
       }
       swap(nums[low], nums[j]);
       return j;
       }

       void quickSort(vector<int> &nums, int low, int high) {
       int j;
       if (low < high) {
       j = partition(nums, low, high);
       quickSort(nums, low, j);
       quickSort(nums, j+1, high);
       }
       }
       */
    vector<int> twoSum(vector<int> &nums, int target) {
        vector<int> indices;
        map<int, int> hmap;
        int i;

        for (i = 0; i < nums.size(); ++i) {
            int x = target - nums[i];
            if (hmap.find(x) != hmap.end()) {
                indices.push_back(hmap.at(x));
                indices.push_back(i);
                break;
            } else {
                hmap[nums[i]] = i;
            }
        }
        return indices;
    }
};

int main() {
    Solution soln;
    vector<int> nums1 = {2, 7, 11, 15};
    vector<int> nums2 = {3, 2, 4};
    vector<int> nums3 = {3, 3};

    vector<int> indices = soln.twoSum(nums1, 9);
    for (int i = 0; i < indices.size(); ++i)
        cout << indices[i] << " ";
    cout << endl;

    indices = soln.twoSum(nums2, 6);
    for (int i = 0; i < indices.size(); ++i)
        cout << indices[i] << " ";
    cout << endl;

    indices = soln.twoSum(nums3, 6);
    for (int i = 0; i < indices.size(); ++i)
        cout << indices[i] << " ";
    cout << endl;

    return 0;
}
