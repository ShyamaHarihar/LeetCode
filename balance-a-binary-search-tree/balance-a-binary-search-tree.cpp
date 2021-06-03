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
    TreeNode* balanceBST(TreeNode* root) {
    if(root==NULL)
    {
        return NULL;
    }
    vector<int> v;
    helper(root,v);
    int s=0;
    int e=v.size()-1;
    return construct(v,s,e);
    }
    void helper(TreeNode* root,vector<int>& v)
    {
        if(root==NULL)
        {
            return;
        }
        helper(root->left,v);
        v.push_back(root->val);
        helper(root->right,v);    
    }
    TreeNode* construct(vector<int> v,int s,int e)
    {
        if(s>e)
        {
            return NULL;
        }
        int mid=(s+e)/2;
        TreeNode* root=new TreeNode(v[mid]);
        root->left=construct(v,s,mid-1);
        root->right=construct(v,mid+1,e);
        return root;
    }
};