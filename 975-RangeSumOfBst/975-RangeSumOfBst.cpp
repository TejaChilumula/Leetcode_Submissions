// Last updated: 7/2/2025, 11:51:38 PM
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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root == NULL) return 0;

        if(root->val > high) return rangeSumBST(root->left, low, high);

        if(root->val < low) return rangeSumBST(root->right, low, high);

        return root->val + rangeSumBST(root->left,low,high) + rangeSumBST(root->right,low,high);



    }
};