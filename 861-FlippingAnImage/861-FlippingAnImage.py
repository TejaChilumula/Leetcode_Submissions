# Last updated: 7/2/2025, 11:52:02 PM
class Solution:
    def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:
        res = []
        for i in range(len(image)):
            l = []
            for k in image[i]:
                l.append(k)
                
            l.reverse()
            for j in range(0,len(l)):
                if l[j] == 0:
                    l[j]=1
                else:
                    l[j]=0
            res.append(l)
        return res
        
                       