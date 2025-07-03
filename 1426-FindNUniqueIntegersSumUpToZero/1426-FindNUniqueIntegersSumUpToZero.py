# Last updated: 7/2/2025, 11:50:54 PM
class Solution:
    def sumZero(self, n: int) -> List[int]:
        
            a = []*n
            for i in range(1,n//2+1):
                a.append(i)
            for i in range(-(n//2) , 0):
                a.append(i)
            if n%2 != 0:
                a.append(0)
            return a
                