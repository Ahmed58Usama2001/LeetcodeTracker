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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        bool zigzag=true;
        deque<TreeNode*>dq;
        vector<vector<int>>res;

        if(!root)
        return res;

        dq.push_back(root);
        while(!dq.empty())
        {   vector<int>level;
            
            int sz=dq.size();
            while(sz--)
            {   TreeNode* cur;
                if(zigzag)
                {
                    cur=dq.back();
                    dq.pop_back();
                    level.push_back(cur->val);
                    if(cur->left)
                    dq.push_front(cur->left);

                    if(cur->right)
                    dq.push_front(cur->right);
                }
                else
                {
                    cur=dq.front();
                    dq.pop_front();
                    level.push_back(cur->val);
                    if(cur->right)
                    dq.push_back(cur->right);

                    if(cur->left)
                    dq.push_back(cur->left);
                }

            }
            res.push_back(level);
            zigzag=!zigzag;
        }

        return res;
    }
};