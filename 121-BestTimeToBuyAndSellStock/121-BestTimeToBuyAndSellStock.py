# Last updated: 7/2/2025, 11:54:03 PM
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit = 0
        ans = 0
        minn = prices[0]
        for i in range(len(prices)):
            ans = max(ans, prices[i] - minn)
            minn = min(minn, prices[i])
        return ans
        