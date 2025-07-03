# Last updated: 7/2/2025, 11:53:02 PM
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        leftArr = [1]*(n)
        for i in range(1,n):
            leftArr[i] = leftArr[i-1]*nums[i-1]
        right = 1
        for i in range(n-1,-1,-1):
            leftArr[i] = leftArr[i]*right
            right = right*nums[i]
        return leftArr
        