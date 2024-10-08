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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        if(!root)
        return res;

        queue<TreeNode*> q;

        q.push(root);

        while(!q.empty())
        {
            int sz=q.size();

            while(sz--)
            {
                TreeNode* cur=q.front();
                q.pop();

                if(!sz)
                res.push_back(cur->val);


                if(cur->left)
                q.push(cur->left);

                if(cur->right)
                q.push(cur->right);
            }
        }

        return res;
    }
};