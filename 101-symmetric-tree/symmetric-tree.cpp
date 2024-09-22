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
    bool isSymmetric(TreeNode* root) {
        return is_mirror(root->left,root->right);
    }

    bool is_mirror(TreeNode* first,TreeNode* second)
    {
        if(!first && !second)
        return true;

        if((first && !second) || (second && !first) || (first->val!=second->val))
        return false;

        return is_mirror(first->left, second->right) && is_mirror(first->right, second->left);
    }
};