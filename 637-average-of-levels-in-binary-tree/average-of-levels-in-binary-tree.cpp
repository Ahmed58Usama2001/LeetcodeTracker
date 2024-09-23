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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>res;

        queue<TreeNode*> tree;
        tree.push(root);
        res.push_back(((double)root->val)/1);

        while(!tree.empty())
        {
            double sz=tree.size(),counter=0,sum=0;

            while(sz--)
            {
                TreeNode* cur=tree.front();
                 tree.pop();
                if(cur->left)
                {
                    sum+=cur->left->val;
                    tree.push(cur->left);
                    counter++;
                }

                 if(cur->right)
                {
                    sum+=cur->right->val;
                    tree.push(cur->right);
                    counter++;
                }
            }
            
            res.push_back(sum/counter);
        }
        
        res.pop_back();
        return res;
    }
};