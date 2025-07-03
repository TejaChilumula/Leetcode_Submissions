# Last updated: 7/2/2025, 11:50:17 PM
class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        maxx=0
        cur=0
        for i in range(0,len(gain)):
            if i==0:
                cur = 0+gain[i]
            else:
                cur = cur+gain[i]
            if cur>maxx:
                maxx = cur
        return maxx
            