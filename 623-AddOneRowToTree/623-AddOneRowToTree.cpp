// Last updated: 7/2/2025, 11:52:18 PM
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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {

        if(depth == 1)
        {
            TreeNode *newnode = new TreeNode(val,root,nullptr);
            return newnode;
        }
        help(root, 1,depth-1, val);
        return root;
        
    }

    void help(TreeNode *root, int len, int d, int val)
    {
        if (root == nullptr) {
        // Handle the case where root is null
        return;
    }
        if(len == d)
        {
            TreeNode *newnode = new TreeNode(val);
            
                newnode->left = root->left;
                root->left = newnode;
           
                TreeNode *newnode2 = new TreeNode(val);
                newnode2->right = root->right;
                root->right = newnode2;

            return;
        }

        help(root->left,len+1,d,val);
        help(root->right,len+1,d,val);

    }


};