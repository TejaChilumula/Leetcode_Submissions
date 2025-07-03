// Last updated: 7/2/2025, 11:54:33 PM
class Solution {
    public int climbStairs(int n) {
        //return climbStair(n,new int[n+1]);

         int dp[] = new int[n+1];
         if(n==1) return 1;
         if(n==0) return 0;
         int prev1 = 1;
         int prev2 = 2;
         for(int i=3;i<=n;i++)
         {
             int cur = prev1 + prev2;
            prev1 = prev2;
            prev2 = cur;
         }

         return prev2;

    }

    // public int climbStair(int n , int[] dp) {
    //     if(n <= 1) return 1;
    //     if(dp[n] != 0) return dp[n];
    //     return dp[n] = climbStair(n-1,dp) + climbStair(n-2,dp); 
    // }
}