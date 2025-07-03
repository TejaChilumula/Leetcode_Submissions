# Last updated: 7/2/2025, 11:52:42 PM
class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        c = Counter(nums1)
        res = []
    
        for i in c:
            if i in nums2 and c[i] != 0:
                c[i] -= 1
                res.append(i)
            
        return res
                
        