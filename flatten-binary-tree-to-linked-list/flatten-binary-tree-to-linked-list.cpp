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
    void flatten(TreeNode* root) {
     vector<TreeNode*> v;
        helper(root,v);
        for(int i=0;i<v.size();i++)
        {
            v[i]->left=NULL;
            v[i]->right=(i==v.size()-1)?NULL:v[i+1];
            
        }
    }
    void helper(TreeNode* root,vector<TreeNode*>& v)
    {
        if(root==NULL)
            return;
        v.push_back(root);
        helper(root->left,v);
        helper(root->right,v);
    }
};