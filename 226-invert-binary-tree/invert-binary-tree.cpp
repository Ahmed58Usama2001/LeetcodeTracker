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
    TreeNode* invertTree(TreeNode* root) {
        if(!root)
        return root;

        TreeNode* NewTree=new TreeNode(root->val);

        flip_tree(root,NewTree);

        return NewTree;
    }

    void flip_tree(TreeNode* root ,TreeNode*& NewTree)
    {   
        if(root&& root->right )
        NewTree->left=new TreeNode(root->right->val);

        if(root&& root->left )
        NewTree->right=new TreeNode(root->left->val);

        if(root->right && NewTree->left)
        flip_tree(root->right,NewTree->left);

        if(root->left && NewTree->right)
        flip_tree(root->left,NewTree->right);
    }
};