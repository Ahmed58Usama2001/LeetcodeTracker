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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>res;
        traverse(root,res,"");

        for(int i=0;i<res.size();i++)
        res[i]=res[i].substr(2);

        return res;
    }

     void traverse(TreeNode* root,vector<string>& res,string path)
     {  
        string c =to_string(root->val);
        path+="->"+c;

        if(!root->left && !root->right)
            res.push_back(path);
        
        if(root->left)
        traverse(root->left,res,path);

        if(root->right)
        traverse(root->right,res,path);
     }
};