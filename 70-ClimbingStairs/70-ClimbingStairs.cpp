// Last updated: 7/2/2025, 11:54:25 PM
class Solution {
public:
    int climbStairs(int n) {
        // if(n < 0  ) return 0;
        // if( n == 0) return 1;

        // int one = climbStairs(n-1);
        // int two = 0;
        // if( n > 1) two = climbStairs(n-2);

        // return one + two;

        vector<int> dp(n+1); // if it is 1 based indexing

        if(n <= 2 ) return n;
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;

        

        for(int i=3;i<=n;i++){
            dp[i] = dp[i-1] + dp[i-2];
        }

        return dp[n];
    }

    void help(int n, int &ways)
    {
        if(n < 0  ) return;
        if( n == 0){
            ways++;
            return;
        }

        help(n-1, ways);
        //int two = 0;
        if( n > 1) help(n-2, ways);

    }
};