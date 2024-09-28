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
    TreeNode* searchBST(TreeNode* root, int val) {
        cout<<root->val<<endl;
        
        if(root->val==val)
        return root;

        if(val>root->val && root->right)
        return searchBST(root->right, val);
        else if(val>root->val &&!root->right)
        return nullptr;

        if(val<root->val && root->left)
        return searchBST(root->left, val);
        else if(val<root->val &&!root->left)
        return nullptr;

        return nullptr;
    }
};