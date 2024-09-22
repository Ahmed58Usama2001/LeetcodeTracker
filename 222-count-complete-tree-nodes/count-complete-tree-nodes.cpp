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
    int countNodes(TreeNode* root) {
        if(!root)
        return 0;

        queue<TreeNode*>tree;
        int res=1;

        tree.push(root);

        while(!tree.empty())
        {   int sz=tree.size();
           
            while(sz--)
            {
                TreeNode* cur=tree.front();
                tree.pop();

                if(cur->left)
                {
                    tree.push(cur->left);
                    res++;
                }

                if(cur->right)
                {
                    tree.push(cur->right);
                    res++;
                }
            }
        }

        return res;
    }
};