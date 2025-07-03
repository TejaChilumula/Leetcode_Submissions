// Last updated: 7/2/2025, 11:51:29 PM
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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int, multiset<int>>> mp;

        queue<pair<int,pair<int, TreeNode*>>> q;

        q.push({0, {0,root}});

        while(!q.empty()){
            auto [row, pair] = q.front(); q.pop();

            auto [col, topNode] = pair;

            mp[col][row].insert(topNode->val);

            if(topNode->left) q.push({row+1, {col-1, topNode->left}});
            if(topNode->right) q.push({row+1, {col+1, topNode->right}});
        }

        vector<vector<int>> ans;
        for(auto entry : mp){
            vector<int> sets;
            for(auto rowentry : entry.second)
                sets.insert(sets.end(), rowentry.second.begin(), rowentry.second.end());
            ans.push_back(sets);
        }

        return ans;
    }
};