# Last updated: 8/14/2025, 6:55:54 PM
class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        pre_sum = defaultdict(int)

        pre_sum[0] = 1

        wsum, ans = 0,0

        for end in range(len(nums)):
            wsum += nums[end]

            if wsum - k in pre_sum:
                ans+=pre_sum[wsum-k]
            
            pre_sum[wsum] += 1
        
        return ans