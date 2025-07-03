// Last updated: 7/2/2025, 11:52:47 PM
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(), coins.end());
        // reverse(coins.begin(), coins.end());
        int maxi = -1;
        vector<int> dp(amount + 1, INT_MAX-1);
        // help(coins, amount, maxi, 0, dp );
        // return maxi;

        for (int i = 0; i < coins.size(); i++) {
            if (coins[i] <= amount)
                dp[coins[i]] = 1;
        }

        dp[0] = 0;

        for (int i = 0; i <= amount; i++) {
            for (int j = 0; j < coins.size(); j++) {
                
                    if (i - coins[j] >= 0 && dp[i - coins[j]] != INT_MAX - 1) {  
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
                
            }
        }
        }
        return (dp[amount] == INT_MAX-1) ? -1 : dp[amount];
    }
    };

    int help(vector<int>& coins, int amt, int& maxi, int lcl, vector<int>& dp) {
        // if(amt<0) return 0;
        if (amt == 0) {
            if (maxi == -1)
                maxi = lcl;
            else
                maxi = min(maxi, lcl);
            return 0;
        }

        if (dp[amt] != -1)
            return dp[amt];

        for (int i = 0; i < coins.size(); i++) {
            if (amt - coins[i] >= 0) {
                // dp[amt-coins[i]] = lcl + 1;
                dp[amt - coins[i]] =
                    help(coins, amt - coins[i], maxi, lcl + 1, dp);
            }
        }

        return dp[amt];

        // return dp[amt];
    }
