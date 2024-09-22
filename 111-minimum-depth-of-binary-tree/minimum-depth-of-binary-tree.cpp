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
    int minDepth(TreeNode* root) {
        if(!root)
        return 0;
        
        return MinDepth(root);
    }

    int MinDepth(TreeNode* root)
    {
        if(!root)
        return 0;

        if(root->right && !root->left)
        return MinDepth(root->right)+1;

        else if(!root->right && root->left)
        return MinDepth(root->left)+1;

        else
        return min(MinDepth(root->right),MinDepth(root->left))+1;
    }
};