// Last updated: 7/2/2025, 11:52:50 PM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
      // convert tree to string

      // use a preorder traversal
      queue<TreeNode*> q;
      if(root == NULL) return "";
      q.push(root);
      string s = "";

      while(!q.empty())
      {
        TreeNode *node = q.front();
        s = node == NULL ? s+"#," : s+to_string(node->val)+",";
        q.pop();

        if(node != NULL) {
        q.push(node->left);
        q.push(node->right);
        }
        
      }

    return s;  
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
      
      if(data == "") return NULL;

      stringstream s(data);
      string no;

      getline(s, no, ',');
      TreeNode *root = new TreeNode(stoi(no));
      queue<TreeNode*> q;
      q.push(root);

      while(!q.empty())
      {
        TreeNode *node = q.front();
        q.pop();

        getline(s, no, ',');

        if(no == "#")
        {
          node->left = NULL;
        }
        else
        {
          TreeNode *l = new TreeNode(stoi(no));
          node->left = l;
          q.push(l);
        }

        getline(s, no, ',');

        if(no == "#")
        {
          node->right = NULL;
        }
        else
        {
          TreeNode *r = new TreeNode(stoi(no));
          node->right = r;
          q.push(r);
        }

      }

      return root;
        
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));