# Last updated: 7/2/2025, 11:50:59 PM
class Solution:
    def minTimeToVisitAllPoints(self, points: List[List[int]]) -> int:
        ans =0
        for i in range(0,len(points)-1):
            ans =ans+ max(abs(points[i][0]-points[i+1][0]),abs(points[i][1]-points[i+1][1]))   
        return ans
                      
        