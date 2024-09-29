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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        queue<int> qpreorder;
        for(int i=0;i<preorder.size();i++)
        qpreorder.push(preorder[i]);

        TreeNode * res= build(qpreorder,inorder,0,-1);

        return res;
    }
    TreeNode* build(queue<int>& preorder,vector<int>& inorder,int inorder_start,int inorder_end)
    {
        if(inorder_end == -1)
        inorder_end=inorder.size()-1;

        int data=preorder.front();
        preorder.pop();

        for(int split=0;split<=inorder_end;split++)
        {
            if(inorder[split]==data)
            {
                TreeNode* cur=new TreeNode (data);
                if(split>inorder_start)
                cur->left=build(preorder,inorder,inorder_start,split-1);
                if(split<inorder_end)
                cur->right=build(preorder,inorder,split+1,inorder_end);
                return cur;
            }
        }
        return nullptr;
    }
};