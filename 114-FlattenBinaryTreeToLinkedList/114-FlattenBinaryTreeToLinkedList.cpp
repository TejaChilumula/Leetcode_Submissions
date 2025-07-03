// Last updated: 7/2/2025, 11:54:00 PM
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

    void flatten(TreeNode* root) {
        TreeNode *prev = NULL;
        help(root, prev);
    }

    void help(TreeNode *root, TreeNode *prev)
    {
        if(root == NULL) return;

        TreeNode *cur = root;

        while(cur != NULL) 
        {
            if(cur->left != NULL)
            {
                prev = cur->left;

                while(prev->right != NULL)
                prev = prev->right;

                prev->right = cur->right;
                cur->right = cur->left;
                cur->left = NULL;
            }
            cur = cur->right;
        }

    }
};