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


    int diameterOfBinaryTree(TreeNode* root) {
        int res=0;
        Diam(root,res);
        return res;
    }

        int Diam(TreeNode* cur,int& res){
            if(!cur)
            return 0;

            int left=Diam(cur->left,res);
            int right=Diam(cur->right,res);

            res=max(res,left+right);

            return max(left,right)+1;
    }

};