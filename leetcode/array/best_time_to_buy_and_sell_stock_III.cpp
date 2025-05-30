#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    // Optimal approach - Time complexity -- O(n)
    int maxProfit(vector<int> &prices) {
        int k = 0, tc = 0, profit = 0, maxProfit = INT16_MIN, i;

        for (i = 1; i < prices.size(); ++i) {
            if (prices[i] > prices[i - 1]) {
                k++;
                tc++;
                profit += prices[i] - prices[i-1];
            }
        }
        return profit;
    }
};

int main() {
    vector<int> prices1 = {3, 3, 5, 0, 0, 3, 1, 4};
    vector<int> prices2 = {1, 2, 3, 4, 5};
    vector<int> prices3 = {7, 6, 4, 3, 1};

    Solution soln;
    cout << soln.maxProfit(prices1) << endl;
    cout << soln.maxProfit(prices2) << endl;
    cout << soln.maxProfit(prices3) << endl;

    return 0;
}