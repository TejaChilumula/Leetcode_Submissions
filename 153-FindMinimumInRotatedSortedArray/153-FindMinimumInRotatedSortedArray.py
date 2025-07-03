# Last updated: 7/2/2025, 11:53:41 PM
class Solution:
    def findMin(self, nums: List[int]) -> int:
        n = len(nums)        
        l, r = 0, n-1
        res = nums[0]
        while(l<r):
            mid = (l + r) // 2

            if(nums[mid] > nums[r]):
                l = mid+1
            else:
                r = mid
            
        return nums[l]
        
        