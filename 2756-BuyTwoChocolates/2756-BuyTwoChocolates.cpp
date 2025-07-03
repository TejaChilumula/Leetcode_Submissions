// Last updated: 7/2/2025, 11:49:17 PM
class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());


            if(money - prices[0] - prices[1] < 0) return money;
            return money-prices[0]-prices[1];
    }
};