// Last updated: 7/2/2025, 11:52:48 PM
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
    vector<vector<int>> verticalOrder(TreeNode* root) {
        vector<vector<int>> ans;
        map<int, vector<int>> mp;
        queue<pair<int, TreeNode *>> q;

        if(!root) return ans;

        q.push({0,root});
        while(!q.empty())
        {
          int lvl = q.front().first;
          TreeNode *node = q.front().second;
          mp[lvl].push_back(node->val);
          q.pop();
          if(node->left) q.push({lvl-1, node->left});
          if(node->right) q.push({lvl+1, node->right});
        }

        for(auto & entry : mp)
        {
          ans.push_back(entry.second);
        }

        return ans;
    }
};