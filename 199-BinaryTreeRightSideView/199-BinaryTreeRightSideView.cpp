// Last updated: 7/2/2025, 11:53:23 PM
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
    int lvl = 0;
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        help(root, ans, 1);
        return ans;
    }

    void help(TreeNode *root, vector<int> &ans, int lcl)
    {
        if(root == NULL) return;

        if(lcl > lvl){
            ans.push_back(root->val);
            lvl++;
        }

        
        help(root->right, ans, lcl+1);
        help(root->left, ans, lcl+1);

    }
};