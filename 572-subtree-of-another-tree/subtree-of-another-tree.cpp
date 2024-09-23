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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root)
        return false;
       
        else if(isSameTree(root,subRoot))
        return true;

        else
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }

    bool isSameTree(TreeNode* tree1, TreeNode* tree2) {
        if(!tree1 || !tree2)
        return tree1==nullptr && tree2==nullptr;

        else if(tree1->val == tree2->val)
        return isSameTree(tree1->left,tree2->left) && isSameTree(tree1->right,tree2->right);

        else
        return false;
    }
};