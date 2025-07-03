# Last updated: 7/2/2025, 11:54:02 PM
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minDepth(self, root: Optional[TreeNode]) -> int:
        if not root:
            return 0
        self.minn = float(inf)
        
        self.help(root, 0)
        return self.minn
    
    def help(self, root: TreeNode, lcl : int):
        if not root:
            return
        
        if not root.left and not root.right:
            self.minn = min(self.minn, lcl+1)
            return
        

        self.help(root.left,lcl+1)
        self.help(root.right,lcl+1)
        
        
            
        
        