# Last updated: 7/2/2025, 11:54:29 PM
class Solution:
    def climbStairs(self, n: int) -> int:
        '''no_ways = 0
        dp = [-1]*(n+1)
        return self.help(n,dp)
        #return no_ways'''
        dp = [0] * (n+1)
        dp[0],dp[1] = 1,1

        for i in range(2,n+1):
            dp[i] = dp[i-1]+dp[i-2]

        return dp[n]
    def help(self ,n:int, dp:List[int]) -> int:
        if(dp[n] != -1):
            return dp[n]
        if(n <= 1):
            return 1
        dp[n] = self.help(n-1, dp) + self.help(n-2, dp)
        return dp[n]
        