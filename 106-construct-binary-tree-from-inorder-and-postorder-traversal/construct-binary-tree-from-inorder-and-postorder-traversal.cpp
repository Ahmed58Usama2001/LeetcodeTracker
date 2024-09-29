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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        TreeNode * res= build(inorder,postorder,0,-1);

        return res;
    }

    TreeNode* build(vector<int>& inorder,vector<int>& postorder,int inorder_start,int inorder_end)
    {
        if(inorder_end == -1)
        inorder_end=inorder.size()-1;

        int data=postorder.back();
        postorder.pop_back();

        for(int split=inorder_start;split<=inorder_end;split++)
        {
            if(inorder[split]==data)
            {
                TreeNode* cur=new TreeNode (data);
                if(split<inorder_end)
                cur->right=build(inorder,postorder,split+1,inorder_end);
                if(split>inorder_start)
                cur->left=build(inorder,postorder,inorder_start,split-1);
                return cur;
            }
        }
        return nullptr;
    }
};