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
    bool isBalanced(TreeNode* root) {
        if(!root)
        return true;
        
        int left=depth(root->left);
        int right=depth(root->right);

        return abs(left-right)<=1 && isBalanced(root->left) && isBalanced(root->right);
    }

    int depth(TreeNode* root)
    {
        if(!root)
        return 0;

        return max(depth(root->right),depth(root->left))+1;
    }
};