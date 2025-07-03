# Last updated: 7/2/2025, 11:51:34 PM
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isCompleteTree(self, root: Optional[TreeNode]) -> bool:
        if not root:
            return True
        
        q = deque([root])
        NullFound = False
        
        while q:
            node = q.popleft()
            
            if not node:
                NullFound = True
            else:
                if NullFound:
                    return False
            
                q.append(node.left)
                q.append(node.right)
        
    
        return True
        