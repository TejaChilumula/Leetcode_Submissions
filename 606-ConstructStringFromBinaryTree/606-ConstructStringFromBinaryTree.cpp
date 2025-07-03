// Last updated: 7/2/2025, 11:52:20 PM
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
    string tree2str(TreeNode* root) {

        string ans = "";
        help(root, ans, "");
        return ans;
    }

    void help(TreeNode *root, string &ans, string lcl)
    {
        if(root == NULL) return;

        string s = to_string(root->val);

        ans+=s;
        if(root->right != NULL || root->left != NULL)
        {
        ans+="(";
        help(root->left, ans, lcl);
        ans+=')';
        }

        if(root->right != NULL)
        {
        ans+='(';
        help(root->right, ans, lcl);
        ans+=')';
        }
    }
};