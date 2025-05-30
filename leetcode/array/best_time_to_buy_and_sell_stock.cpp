#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Brute force approach - Time complexity -- O(n^2)
    /*
    int maxProfit(vector<int> &prices) {
        int i, j, max1 = INT16_MIN, max2 = INT16_MIN;
        for (i = 0; i < prices.size() - 1; ++i) {
            for (j = i + 1; j < prices.size(); ++j) {
                if (prices[j] - prices[i] > max1) {
                    max1 = prices[j] - prices[i];
                    if (max1 > max2)
                        max2 = max1;
                }
            }
        }
        if (max2 > 0)
            return max2;
        else
            return 0;
    }
    */

    // Optimal approach - Time complexity -- O(n)
    int maxProfit(vector<int> &prices) {
        int buy = INT16_MAX, sell = 0, maxProfit = 0;
        int i;

        for (i = 0; i < prices.size()-1; ++i) {
            buy = min(buy, prices[i]);
            sell = prices[i+1];
            if ((sell > buy) && (sell - buy) > maxProfit) {
                maxProfit = sell - buy;
            }
        }
        return maxProfit;
    }
};

int main() {
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    vector<int> prices2 = {7, 6, 4, 3, 1};

    Solution soln;
    cout << soln.maxProfit(prices1) << endl;
    cout << soln.maxProfit(prices2) << endl;

    return 0;
}