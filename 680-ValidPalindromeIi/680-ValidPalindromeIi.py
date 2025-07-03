# Last updated: 7/2/2025, 11:52:16 PM
class Solution:
    def validPalindrome(self, s: str) -> bool:
        return self.help(s, 0, len(s) -1 ,0)
    
    def help(self, s:str, i : int, j : int, c : int) -> bool:
        
        
        if c > 1: return False
        
        if i >= j: return True

        if s[i] == s[j]:
            return self.help(s,i+1,j-1,c)
        
        return self.help(s,i,j-1,c+1) or self.help(s,i+1,j,c+1)