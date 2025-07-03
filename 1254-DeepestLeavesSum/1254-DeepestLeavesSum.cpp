// Last updated: 7/2/2025, 11:51:08 PM
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
    int max_depth = 0;
    int deepestLeavesSum(TreeNode* root) {

        int total = 0;
        helper(root,0,total);
        return total;
    }

    void helper(TreeNode* root, int depth, int& total){
            if(root == NULL) return;

            if(depth > max_depth){
                total = 0;
                total += root->val;
                max_depth = max(depth, max_depth);
            }
            else if(depth == max_depth) total += root->val;

            helper(root->left, depth+1,total);
            helper(root->right, depth+1,total);
    }
};