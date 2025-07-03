# Last updated: 7/2/2025, 11:53:13 PM
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        nums2 = set(nums)
        if len(nums) == len(nums2):
            return False
        return True
        