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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>res;

        if(!root)
        return res;

        postorder(root,res);
        return res;
    }

        void postorder(TreeNode* root,vector<int>&res)
    {  
        if(root->left)
        postorder(root->left,res);

        if(root->right)
        postorder(root->right,res);

        if(root)
        res.push_back(root->val);
    }
};