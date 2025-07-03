// Last updated: 7/2/2025, 11:54:05 PM
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        
        int z = 0;

        vector<vector<int>> ans;
        if(root == NULL) return ans;

        queue<TreeNode *> q;
        q.push(root);
        
        while(!q.empty())
        {
            int len = q.size();
            vector<int> nodes;
            
            
            for(int i=0;i<len;i++)
            {
                TreeNode *top = q.front();
                q.pop();
                if(top->left != NULL) q.push(top->left);
                if(top->right != NULL) q.push(top->right);
                nodes.push_back(top->val);

            }
            if(z%2 == 1) reverse(nodes.begin() , nodes.end());
            z++;
            ans.push_back(nodes);

        }

        return ans;
    }
};