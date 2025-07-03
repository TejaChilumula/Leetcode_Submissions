// Last updated: 7/2/2025, 11:51:07 PM
class Solution {
public:
    int mod = 1e9 + 7;
    int numRollsToTarget(int n, int k, int target) {
        
        long long int ans = 0;

        // Edge case: impossible to achieve target
        if (target < n || target > n * k) return 0;

        vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));
        ans = help(n, k, target, dp);

        return ans;
    }

private:
    long long int help(int n, int k, int target, vector<vector<int>> &dp) {
        if (n == 0) return target == 0 ? 1 : 0;
        if (target < 0) return 0;

        if (dp[n][target] != -1) return dp[n][target];

        long long int ans = 0;
        for (int i = 1; i <= k; i++) {
            ans = ans + help(n - 1, k, target - i, dp);
            ans%=mod;
        }

        return dp[n][target] = ans;
    }
};