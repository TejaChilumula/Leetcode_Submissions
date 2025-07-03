# Last updated: 7/2/2025, 11:50:23 PM
"""
# Definition for a Node.
class Node:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None
        self.parent = None
"""

class Solution:
    def depth(self,p : 'Node') -> int:
        d = 0
        while p:
            p = p.parent
            d += 1
        return d
            
    def lowestCommonAncestor(self, p: 'Node', q: 'Node') -> 'Node':
        
        dp = self.depth(p)
        dq = self.depth(q)
        
        while dp > dq:
            p = p.parent
            dp -= 1
        while dq > dp:
            q = q.parent
            dq -= 1
        
        while p != q:
            p = p.parent
            q = q.parent
        
        return p
        
        
        