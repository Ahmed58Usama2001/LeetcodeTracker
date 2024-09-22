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
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        if(!root1 && !root2)
        return true;

        if((root1 && !root2) || (root2 && !root1))
        return false;

        string tree1Rep=parenthesize(root1);
        string tree2Rep=parenthesize(root2);

        return tree1Rep==tree2Rep;
    }

    string parenthesize(TreeNode * root)
    {   string rep="(" + to_string(root->val);
        vector<string>v;

        if(root->left)
           v.push_back(parenthesize(root->left));
        else
            v.push_back("()");

        if(root->right)
            v.push_back(parenthesize(root->right));
        else
            v.push_back("()");

        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        rep+=v[i];

        rep+=")";
        return rep;
    }
};