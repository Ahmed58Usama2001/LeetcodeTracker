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
    int sumNumbers(TreeNode* root) {
        vector<vector<int>> paths;
        vector<int>path;
        vector<int>res;
        get_paths(root, path, paths);
        for(int i=0;i<paths.size();i++)
        {int sum=0;
            for(int j=0;j<paths[i].size();j++)
            {
                sum=sum*10;
                sum=sum+paths[i][j];
            }
            res.push_back(sum);
        }
        int sum =accumulate(res.begin(), res.end(), 0);

        return sum;
    }

    void get_paths(TreeNode* node,vector<int>& path,vector<vector<int>>& paths )
    {
        if(!node)
        return;

        path.push_back(node->val);

        if(!node->left && !node->right)
        {
            paths.push_back(path);
            path.pop_back();
            return;
        }

        get_paths(node->left,path,paths);
        get_paths(node->right,path,paths);
        path.pop_back();
    }
};