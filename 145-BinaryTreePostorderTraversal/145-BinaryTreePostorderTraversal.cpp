// Last updated: 7/2/2025, 11:53:38 PM
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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        help(root, ans);
        return ans;
    }

    void help(TreeNode* root, vector<int> &ans){
        if(root == NULL) return;

        help(root->left, ans);
        help(root->right, ans);
        ans.push_back(root->val);
    }
};