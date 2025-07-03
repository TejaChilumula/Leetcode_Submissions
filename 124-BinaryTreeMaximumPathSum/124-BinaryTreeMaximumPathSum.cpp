// Last updated: 7/2/2025, 11:53:53 PM
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
int pathSum = INT_MIN;
    int maxPathSum(TreeNode* root) {
        // might be the chance we can get largest diameter at some node as parent in the tree
      help(root);
      return pathSum;

    }

    int help(TreeNode *root)
    {
      if(root == NULL) return 0;

      int left = max(help(root->left),0);
      int right = max(help(root->right),0);

      pathSum = max(pathSum, max(root->val, root->val + left+right));

      return root->val+max(left, right);
    }
};