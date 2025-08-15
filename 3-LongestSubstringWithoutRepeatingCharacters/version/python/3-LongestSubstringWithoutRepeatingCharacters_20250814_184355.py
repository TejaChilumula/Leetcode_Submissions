# Last updated: 8/14/2025, 6:43:55 PM
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        freq = defaultdict(int)

        start, maxi = 0,0

        for end in range(len(s)):
            freq[s[end]] += 1
            
            while freq[s[end]] > 1:
                freq[s[start]] -= 1
                start += 1

            maxi = max(maxi, end - start + 1)

        return maxi
        