// Last updated: 7/2/2025, 11:51:17 PM
class Solution {
public:
    int tribonacc(int n) {
        int a = 0, b = 1, c= 1;
        if(n == 0) return 0;
        if(n == 1 || n == 2) return 1;

        for(int i=3; i <= n ; i++)
        {
            int d = a+b+c;
            a = b;
            b = c;
            c = d;
        }

        return c;

        
    }

    int tribonacci(int n) {
        if(n == 0) return 0;
        if(n == 1 || n ==2) return 1;

        vector<int> dp(n+1, 0);
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;

        for(int i=3;i<=n;i++)
        {
            dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
        }

        return dp[n];
    }
};