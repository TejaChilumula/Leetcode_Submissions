# Last updated: 7/2/2025, 11:50:28 PM
class SparseVector:
    def __init__(self, nums: List[int]):
        self.data = {} # store an dict
        
        for i in range(len(nums)):
            if nums[i] != 0:
                self.data[i] = nums[i]
            
        

    # Return the dotProduct of two sparse vectors
    def dotProduct(self, vec: 'SparseVector') -> int:
        res = 0
        for i in vec.data:
            if i in self.data:
                res += vec.data[i] * self.data[i]
        return res
        

# Your SparseVector object will be instantiated and called as such:
# v1 = SparseVector(nums1)
# v2 = SparseVector(nums2)
# ans = v1.dotProduct(v2)