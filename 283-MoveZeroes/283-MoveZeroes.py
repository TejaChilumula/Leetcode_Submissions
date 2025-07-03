# Last updated: 7/2/2025, 11:52:53 PM
class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        c = 0
        for i in range(len(nums)):
            if nums[i] == 0:
                c+=1
            else:
                nums[i-c] , nums[i] = nums[i] , nums[i-c]
        

        
