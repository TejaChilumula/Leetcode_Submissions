// Last updated: 7/2/2025, 11:52:28 PM
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
    public int diameterOfBinaryTree(TreeNode root) {
        int maxi[] = new int [1];        
        help(root , maxi);
        return maxi[0];
    }

    public int help(TreeNode root, int[] maxi)
    {
        // leaf nodes -> nodes
        if(root == null) return 0;

        int left = help(root.left , maxi);
        int rght = help(root.right , maxi);

        // at each recursive call check if it greater than 
        // maxi , update the global maxi
        maxi[0] = Math.max(maxi[0] , left + rght);

        return 1+Math.max(left , rght);
    }
}
















