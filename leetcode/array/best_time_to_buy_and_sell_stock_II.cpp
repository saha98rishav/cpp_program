#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Optimal approach - Time complexity -- O(n)
    int maxProfit(vector<int> &prices) {
        int i, maxProfit = 0;

        for (i = 1; i < prices.size(); ++i) {
            if (prices[i] > prices[i - 1])
                maxProfit += prices[i] - prices[i - 1];
        }
        return maxProfit;
    }
};

int main() {
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    vector<int> prices2 = {7, 6, 4, 3, 1};
    vector<int> prices3 = {1, 2, 3, 4, 5};

    Solution soln;
    cout << soln.maxProfit(prices1) << endl;
    cout << soln.maxProfit(prices2) << endl;
    cout << soln.maxProfit(prices3) << endl;

    return 0;
}