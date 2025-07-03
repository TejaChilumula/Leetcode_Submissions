// Last updated: 7/2/2025, 11:52:07 PM
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost)    
    // {
    //     int n = cost.size();
    //     vector<int> dp(n+1,-1);
    //     return min(help(cost, n-1,dp) , help(cost, n-2,dp)  );
    // }

    // int help(vector<int> cost , int len, vector<int> &dp)
    // {
    //     if(len == 1 || len == 0) return cost[len];

    //     if(dp[len] != -1) return dp[len];

    //     return dp[len] = cost[len] + min(help(cost, len-1,dp), help(cost, len-2,dp));

    // }
    {
        int n = cost.size();
        vector<int> dp(n+1, 0);
        
        dp[0] = cost[0];
        dp[1] = cost[1];

        for(int i=2;i<=n;i++)
        {
            dp[i] = min(dp[i-1], dp[i-2]) + (i == n ? 0 : cost[i]);
        }

        return dp[n];
}
};