// Last updated: 7/2/2025, 11:51:28 PM
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
    string smallestFromLeaf(TreeNode* root) {

        int min = INT_MAX;
        string ans = "~";

        help(root, "", ans);
        return ans;
        
    }

    void help(TreeNode *root, string s, string &ans)
   {
        if(root == NULL) return;

        s = char('a' + root->val) + s;

        if(root->left == NULL && root->right == NULL)
        {
            if(s < ans)
            {
                ans = s;
            }
            return;
        }

        help(root->left, s, ans);
        help(root->right, s, ans);
   } 
};