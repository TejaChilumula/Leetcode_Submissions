// Last updated: 7/2/2025, 11:53:07 PM
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
    int c = 0, found = -1;
    int kthSmallest(TreeNode* root, int k) {
      help(root,k);
      return found;
    }
    void help(TreeNode* root, int k)
    {
      if(root == NULL) return;
        help(root->left,k);
        if(c == k-1) {if(found == -1) {found = root->val;}
        return;}
        c++;
        help(root->right,k);
    }
};