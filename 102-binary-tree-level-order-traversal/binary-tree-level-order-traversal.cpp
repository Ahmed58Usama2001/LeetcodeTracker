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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        vector<int>level;
        if(!root)
        return res;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty())
        {   
            int sz=q.size();
            while(sz--)
            {   
                TreeNode* cur=q.front();
                level.push_back(cur->val);
                q.pop();

                if(cur->left)
                q.push(cur->left);

                if(cur->right)
                q.push(cur->right);
            }
            res.push_back(level);
            level.clear();
        }
        return res;
    }
};