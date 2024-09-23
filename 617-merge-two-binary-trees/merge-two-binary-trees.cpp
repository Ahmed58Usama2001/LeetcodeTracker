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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(!root1 && !root2)
        return nullptr;

        if(!root1 && root2)
        return root2;

        if(root1 && !root2)
        return root1;

        TreeNode* NewTree=new TreeNode(root1->val + root2->val);
        merge(root1->right, root2->right, NewTree->right);
        merge(root1->left, root2->left, NewTree->left);


        return NewTree;
    }

    void merge(TreeNode* root1, TreeNode* root2, TreeNode*& NewTree)
    {
        if(root1 && root2)
        NewTree=new TreeNode(root1->val + root2->val);

        if(root1 && !root2)
        NewTree=new TreeNode(root1->val);

        if(!root1 && root2)
        NewTree=new TreeNode(root2->val);

        if(root1 && root2)
        merge(root1->right, root2->right, NewTree->right);
        else if(root1 && !root2)
        merge(root1->right, nullptr, NewTree->right);
        else if(!root1 && root2)
        merge(nullptr, root2->right, NewTree->right);

        if(root1 && root2)
        merge(root1->left, root2->left, NewTree->left);
        else if(root1 && !root2)
        merge(root1->left, nullptr, NewTree->left);
        else if(!root1 && root2)
        merge(nullptr, root2->left, NewTree->left);
    }
};