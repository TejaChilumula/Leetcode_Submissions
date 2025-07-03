// Last updated: 7/2/2025, 11:52:26 PM
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
vector<int> ans;
    int getMinimumDifference(TreeNode* root) {
        if(root == NULL) return 0;

        help(root);

        sort(ans.begin(), ans.end());

        int avg = INT_MAX;

        for(int i=1;i<ans.size();i++)
        {
          avg = min(abs(ans[i-1] - ans[i]), avg);
        }

        return avg;

    }
    void help(TreeNode *root)
    {
      if(root == NULL) return;
      ans.push_back(root->val);
      help(root->left);
      help(root->right);
    }
};