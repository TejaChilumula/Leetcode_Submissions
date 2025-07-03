// Last updated: 7/2/2025, 11:52:55 PM
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
    int closestValue(TreeNode* root, double target) {
        int ans = root->val;
        help(root, target, ans);
        return ans;
    }

    void help(TreeNode *root, double tar, int &ans)
    {
      if(root == NULL) return;

      if((double)(abs(root->val - tar)) <= (double)(abs(ans - tar)) ) 
      {
        if((double)(abs(root->val - tar)) == (double)(abs(ans - tar))) 
          ans = min(ans,root->val);
        else
          ans = root->val;
      }

      // there may be a chance where you will get both the elements 
      // tar = 3.5 , we have 4 and 3 which one choose, automatically it chooses whichever comes in

      help(root->left,tar,ans);
      help(root->right,tar,ans);

      return;
    }
};