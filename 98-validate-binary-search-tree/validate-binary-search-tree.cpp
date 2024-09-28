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
    bool isValidBST(TreeNode* root,long mn=LONG_MIN, long mx=LONG_MAX) {
        bool status=root->val>mn && root->val<mx;

        if(!status)
        return false;

        bool left_bst=!root->left || isValidBST(root->left,mn,root->val);
        if(!left_bst)
        return false;

        bool right_bst=!root->right || isValidBST(root->right,root->val,mx);
        return right_bst;
        
    }
};