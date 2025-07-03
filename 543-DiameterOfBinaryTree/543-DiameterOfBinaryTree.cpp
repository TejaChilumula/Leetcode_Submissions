// Last updated: 7/2/2025, 11:52:25 PM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int d = INT_MIN;
    int diameterOfBinaryTree(TreeNode* root) {
        // might be the chance we can get largest diameter at some node as parent in the tree
      int dd = help(root);
      return d;

    }

    int help(TreeNode *root)
    {
      if(root == NULL) return 0;

      int left = help(root->left);
      int right = help(root->right);

      d = max(d, left+right);

      return 1+max(left, right);
    }
};