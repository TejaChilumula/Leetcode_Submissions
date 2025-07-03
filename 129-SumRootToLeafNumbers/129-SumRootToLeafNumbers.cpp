// Last updated: 7/2/2025, 11:53:50 PM
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
    int sumNumbers(TreeNode* root) {

        int ans = 0;

        help(root, ans, "");

        return ans;
        
    }

    void help(TreeNode *root, int& ans, string s)
    {
        if(root->left == NULL && root->right == NULL) 
        {
            s+=to_string(root->val);
            ans += stoi(s);
            return;
        }

        if(root->left != NULL)
            help(root->left, ans, s+to_string(root->val));
        if(root->right != NULL)
            help(root->right, ans, s+to_string(root->val));
        
        return;
    }
};