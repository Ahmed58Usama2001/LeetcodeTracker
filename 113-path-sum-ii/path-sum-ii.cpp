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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> res;
        vector<int>path;

        paths(root, targetSum, path, res);
        return res;
    }

    void paths(TreeNode* node,int sum,vector<int>& path,vector<vector<int>>& res )
    {
        if(!node)
        return;

        path.push_back(node->val);

        if(!node->left && !node->right && node->val == sum)
        {
            res.push_back(path);
            path.pop_back();
            return;
        }

        paths(node->left,sum-node->val,path,res);
        paths(node->right,sum-node->val,path,res);
        path.pop_back();
    }
};