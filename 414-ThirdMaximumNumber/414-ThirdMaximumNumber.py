# Last updated: 7/2/2025, 11:52:38 PM
class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        nums.sort(reverse = True)
        if(len(nums)<3):return max(nums)
        #if(len(nums)==3): return min(nums)
        c=0
        for i in range(len(nums)-1):
            if(c==2): return nums[i]
            if nums[i]!=nums[i+1]:
                c=c+1
        if c==2 : return nums[-1]
        return max(nums)