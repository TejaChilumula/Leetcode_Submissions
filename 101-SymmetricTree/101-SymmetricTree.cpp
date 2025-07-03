// Last updated: 7/2/2025, 11:54:08 PM
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
    bool isSymmetric(TreeNode* root) {
        return root == NULL || help(root->left, root->right);
    }

    bool help(TreeNode *left_side, TreeNode *right_side)
    {
        if(left_side == NULL && right_side == NULL ) return true;
        if(left_side == NULL || right_side == NULL) return false;

        if(right_side->val != left_side->val)return false;

        return help(left_side->left, right_side->right) & help(left_side->right, right_side->left);
    }
 };