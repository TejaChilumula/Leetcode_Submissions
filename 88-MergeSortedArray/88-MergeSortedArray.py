# Last updated: 7/2/2025, 11:54:19 PM
class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """

        total_len = n + m -1

        while m>0 and n>0:
            if nums1[m-1] > nums2[n-1]:
                nums1[total_len] = nums1[m-1]
                m-=1
            else:
                nums1[total_len] = nums2[n-1]
                n-=1
            total_len -= 1       
        
        while n>0:
            nums1[total_len] = nums2[n-1]
            n-=1
            total_len-=1
        
        
        