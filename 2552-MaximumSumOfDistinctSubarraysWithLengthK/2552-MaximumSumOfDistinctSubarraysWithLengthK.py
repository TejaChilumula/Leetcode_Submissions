# Last updated: 9/13/2025, 8:02:54 PM
class Solution:
    def maximumSubarraySum(self, nums: List[int], k: int) -> int:

        freq = defaultdict(int)
        counter, wsum, maxi = 0, 0, 0
        start, n = 0, len(nums)

        for end in range(n):
            freq[nums[end]] += 1
            counter += 1
            wsum += nums[end]

            if counter > k:
                counter -= 1
                freq[nums[start]] -= 1
                wsum -= nums[start]

                if freq[nums[start]] == 0:
                    del freq[nums[start]]
                
                start += 1
            
            if len(freq) == k:
                maxi = max(maxi, wsum)

        return maxi


        