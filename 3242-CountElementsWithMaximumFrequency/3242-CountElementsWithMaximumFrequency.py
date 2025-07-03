# Last updated: 7/2/2025, 11:49:02 PM
class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:

        total_c = 0
        c = nums.count(nums[0])
        for i in nums:
            if nums.count(i) > c:
                total_c, c = nums.count(i) , nums.count(i)
            elif nums.count(i) == c:
                total_c += c
        
        return total_c//c

        