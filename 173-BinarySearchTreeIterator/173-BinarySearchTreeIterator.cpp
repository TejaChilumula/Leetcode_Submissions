// Last updated: 7/2/2025, 11:53:26 PM
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
class BSTIterator {
public:
int i = 0;
vector<int> arr;
    BSTIterator(TreeNode* root) {
        help(root);
    }
    
    int next() {
        if(i == 0)
        {
            i++;
            return arr[0];
        } 
        else
            return arr[i++];
        
    }
    
    bool hasNext() {
        if(i < arr.size()) return true;
        return false;
        
    }
    void help(TreeNode *root)
    {
        if(root == NULL) return;

        help(root->left);
        arr.push_back(root->val);
        help(root->right);
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */