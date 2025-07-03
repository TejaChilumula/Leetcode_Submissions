# Last updated: 7/2/2025, 11:51:13 PM
class Solution:
    def tribonacci(self, n: int) -> int:
        
        if n == 0:
            return 0
        if n == 1 or n == 2:
            return 1
        
        dp = [0] * (n+1)
        dp[0] = 0
        dp[1] = 1
        dp[2] = 1
        
        t1 = 0
        t2 = 1
        t3 = 1
        t4 = 0
        
        
        for i in range(3 , n+1):
            dp[i] = t1+t2+t3
            t1, t2 ,t3 = t2, t3, dp[i]
            
        return dp[n]
            
        