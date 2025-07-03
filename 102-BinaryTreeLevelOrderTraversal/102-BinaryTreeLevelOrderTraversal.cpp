// Last updated: 7/2/2025, 11:54:06 PM
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL) return ans;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
          int size = q.size();
          vector<int> nodes;
          while(size > 0)
          {
          TreeNode* top = q.front();
          q.pop();
          nodes.push_back(top->val);
          if(top->left) q.push(top->left);
          if(top->right) q.push(top->right);
          size--;
          }

          ans.push_back(nodes);
        }

        return ans;
    }
};