// Last updated: 7/2/2025, 11:53:59 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int buy = INT_MAX;

        for(int i=0;i<prices.size();i++)
        {
            maxProfit = max(maxProfit, prices[i] - buy);
            buy = min(prices[i], buy);
        }

        return maxProfit;
    }
};