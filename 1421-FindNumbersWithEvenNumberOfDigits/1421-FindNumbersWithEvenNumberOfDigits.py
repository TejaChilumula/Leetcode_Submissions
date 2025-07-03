# Last updated: 7/2/2025, 11:50:56 PM
class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        c =0  
        for i in nums:
            if len(str(i))%2 == 0 :
                c=c+1
        return c
        