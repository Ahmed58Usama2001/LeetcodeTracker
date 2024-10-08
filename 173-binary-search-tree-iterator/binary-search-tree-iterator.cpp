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
    vector<int>inorder;
    int ptr=-1;
    BSTIterator(TreeNode* root) {
        inorder_traversal(root);
    }

    void inorder_traversal(TreeNode* root)
    {   if(!root)
          return;

        inorder_traversal(root->left);
        inorder.push_back(root->val);
        inorder_traversal(root->right);
    }
    
    int next() {
        ptr++;
        return inorder[ptr];
    }
    
    bool hasNext() {
        return ptr+1<inorder.size();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */