// Last updated: 7/2/2025, 11:54:01 PM
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public boolean hasPathSum(TreeNode root, int targetSum) {
            if(root == null) return false;
            return help(root , targetSum);
    }

    public boolean help(TreeNode root, int tar)
    {
        if(root == null) return false;
        if(root.left == null && root.right == null) return tar-root.val == 0 ? true : false;
        return help(root.left , tar-root.val) | help(root.right, tar-root.val);
    }
}