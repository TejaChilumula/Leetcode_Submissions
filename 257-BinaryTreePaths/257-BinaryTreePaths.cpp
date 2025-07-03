// Last updated: 7/2/2025, 11:52:58 PM
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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        help(root, ans, "");
        return ans;
    }

   void help(TreeNode *root, vector<string>& ans, string path)
    {
      if(root->left == NULL && root->right == NULL)
      {
        path = path + to_string(root->val);
        ans.push_back(path);
        return;
      }

      

      if(root->left)help(root->left , ans, path + to_string(root->val) + "->");
      if(root->right)help(root->right, ans, path+ to_string(root->val) + "->");

    }
};