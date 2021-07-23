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
    void helper(TreeNode* root,vector<int>& inorder)
    {
        if(root==NULL)
        {
            return;
        }
        helper(root->left,inorder);
        inorder.push_back(root->val);
        helper(root->right,inorder);
    }
    TreeNode* helper1(int s,int e,vector<int>& inorder)
    {
        if(s>e)
        {
            return NULL;
        }
        int mid=(s+e)/2;
        TreeNode* root=new TreeNode(inorder[mid]);
        root->left=helper1(s,mid-1,inorder);
        root->right=helper1(mid+1,e,inorder);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
    vector<int> inorder;
    helper(root,inorder);
        int s=0;
        int e=inorder.size()-1;
        int n=inorder.size()/2;
        return helper1(s,e,inorder);
    }
};