// Last updated: 7/2/2025, 11:52:29 PM
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
    int left_leaf = 0;
    int level = -1;
    void help(TreeNode *root, int lvl)
    {
        if(root == NULL) return;

        
        if(root->left == NULL && root->right == NULL) 
        {
            if(lvl > level)
            {
                left_leaf = root->val;
                level = lvl;
            }
            return;
        }
        level = max(level, lvl);

        if(root->left != NULL) help(root->left, lvl+1);
        if(root->right != NULL) help(root->right, lvl+1);

    }

    int findBottomLeftValue(TreeNode* root) {
        help(root, 0);
        return left_leaf;
    }

    
};