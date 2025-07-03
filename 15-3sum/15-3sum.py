# Last updated: 7/2/2025, 11:55:39 PM
class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        ans = set()

        n = len(nums)
        l, r = 0, n-1

        for i in range(n-2):
            if(i > 0 and nums[i] == nums[i-1]):
                continue
            l, r = i+1 , n-1
            while l < r:
                totalSum = nums[i] + (nums[l] + nums[r])
                if totalSum == 0:
                    ans.add((nums[i], nums[l], nums[r]))
                    l+=1
                    r-=1
                    while l<r and nums[l] == nums[l-1]:
                        l+=1
                    while l<r and nums[r] == nums[r+1]:
                        r-=1
                elif totalSum > 0:
                    r-=1
                else:
                    l+=1

        return ans
                

        return ans
            
