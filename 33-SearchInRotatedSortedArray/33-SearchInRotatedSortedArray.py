# Last updated: 7/2/2025, 11:55:26 PM
class Solution:
    def search(self, nums: List[int], target: int) -> int:
        n = len(nums)        
        l, r = 0, n-1
      
        while(l<=r):
            mid = (l + r) // 2

            if nums[mid] == target:
                return mid
            if nums[l] <= nums[mid]:
                if nums[l] <= target <= nums[mid]:
                    r = mid
                else:
                    l = mid+1
            
            # if it lies in second half
            else:
                if nums[mid] <= target <= nums[r]:
                    l = mid
                else:
                    r = mid-1
            
            
        return -1
        