# Last updated: 7/2/2025, 11:49:46 PM
class Solution:
    def countWords(self, words1: List[str], words2: List[str]) -> int:
        #v = []
        c=0
        for i in range(len(words1)):
            ##for j in range(len(words2)):
                if words1[i] in words2 and words1.count(words1[i]) == 1 and words2.count(words1[i]) == 1:
                    c=c+1
                   # v.append(words1[i])
        return c