// Last updated: 7/2/2025, 11:49:35 PM
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
    bool checkTree(TreeNode* root) {
        return help(root);

    }

    bool help(TreeNode *root)
    {
      if(root == NULL || (root->left == NULL && root->right == NULL)) return true;

    int left = root->left == NULL ? 0 : root->left->val;
    int right = root->right == NULL ? 0 : root->right->val;
    if(left + right != root->val) return false;

      return help(root->left) && help(root->right);
    }
};