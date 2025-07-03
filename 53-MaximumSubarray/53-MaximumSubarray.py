# Last updated: 7/2/2025, 11:55:08 PM
class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        # kadane algorithm

        total_sum = nums[0]
        cur_sum = nums[0]

        for i in range(1, len(nums)):
            cur_sum = max(nums[i], cur_sum +nums[i])
            total_sum = max(total_sum, cur_sum)
        return total_sum
 
        
        