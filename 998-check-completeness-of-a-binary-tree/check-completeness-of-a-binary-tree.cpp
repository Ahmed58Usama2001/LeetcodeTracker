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
    bool isCompleteTree(TreeNode* root) {
        
        queue<TreeNode*> tree;
        tree.push(root);

        bool no_more_allowed=false;

        while(!tree.empty())
        {
            int sz=tree.size();

            while(sz--)
            {   
                TreeNode* cur=tree.front();
                tree.pop();
                
                if(cur->left)
                {
                    if(no_more_allowed)
                     return false;
                    tree.push(cur->left);
                }
                else
                    no_more_allowed=true;

                if(cur->right)
                {
                    if(no_more_allowed)
                     return false;
                    tree.push(cur->right);
                }
                else
                    no_more_allowed=true;

            }
        }

        return true;
    }
};