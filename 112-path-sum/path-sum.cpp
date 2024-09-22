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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root)
        return false;

        int sum=0;
        return dfs(root,targetSum,sum);
    }

    bool dfs(TreeNode* root, int targetSum,int sum)
    {   
        if(root)
        sum+=root->val;
        else
        return false;
        
        if(sum==targetSum && !root->left && !root->right)
        return true;
        
        return dfs(root->left,targetSum, sum) || dfs(root->right,targetSum, sum);
    }
};