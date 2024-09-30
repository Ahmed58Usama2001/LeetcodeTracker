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
    int kthSmallest(TreeNode* root, int k) {
        vector<int>nodes;
        traverse(root,nodes);
        sort(nodes.begin(),nodes.end());

        for(int i=0;i<nodes.size();i++)
        if(i+1==k)
        return nodes[i];

        return -1;
    }

    void traverse(TreeNode* node, vector<int>& nodes)
    {   if(!node)
            return;

        nodes.push_back(node->val);
        traverse(node->left,nodes);
        traverse(node->right,nodes);
    }
};