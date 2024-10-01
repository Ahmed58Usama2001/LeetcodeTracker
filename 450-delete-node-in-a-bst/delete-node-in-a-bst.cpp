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
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        if(!root)
        return root;

        if(key < root->val)
        root->left= deleteNode(root->left,key);
        else if(key > root->val)
        root->right=deleteNode(root->right,key);
        else
        {
            TreeNode* tmp=root;
            if(!root->right && !root->left)
            root=nullptr;
            else if(!root->right)
            root=root->left;
            else if(!root->left)
            root=root->right;
            else
            {
                TreeNode* mn=min_node(root->right,key);
                root->val=mn->val;
                root->right=deleteNode(root->right,root->val);
            }
        }
        return root;
    }

    TreeNode* min_node(TreeNode* root,int key){
        TreeNode* cur=root;
        while(cur && cur->left)
        cur=cur->left;

        return cur;
    }
};