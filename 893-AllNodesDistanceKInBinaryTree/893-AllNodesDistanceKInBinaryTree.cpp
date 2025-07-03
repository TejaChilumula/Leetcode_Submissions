// Last updated: 7/2/2025, 11:51:46 PM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
  map<TreeNode*, TreeNode*> parent;
  map<TreeNode*, bool> vis;
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int> ans;

        queue<pair<TreeNode*, int>> q;

        parent[root] = NULL;
        makeParent(root);
        vis[target] = true;
        q.push({target, 0});

        while(!q.empty())
        {
          if(q.front().second == k) 
          {
            while(!q.empty())
              {
                ans.push_back(q.front().first->val);
                q.pop();
              }return ans;
          }

          int s = q.size();

          for(int i=0;i<s;i++)
          {
          TreeNode* node = q.front().first;
          int lvl = q.front().second;
          q.pop();

          if(node->left && !vis[node->left]){ 
            q.push({node->left, lvl+1});
            vis[node->left] = true;
          }

          if(node->right && !vis[node->right])
          { q.push({node->right,lvl+1});
          vis[node->right] = true;
          }
          if(parent[node] != NULL && !vis[parent[node]]) 
          {q.push({parent[node], lvl+1});
          vis[parent[node]] = true;
          }


          }
        }

        

        return ans;

    }

    void makeParent(TreeNode* root)
    {
      if(root == NULL) return;

      if(root->left) parent[root->left] = root;
      if(root->right) parent[root->right] = root;

       makeParent(root->left);
       makeParent(root->right);
      

      
    }
};