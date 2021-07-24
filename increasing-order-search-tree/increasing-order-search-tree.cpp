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
    TreeNode* increasingBST(TreeNode* root) {
    
    TreeNode* prev=NULL;
    TreeNode* ret=NULL;
    helper(root,prev,ret);
    return ret;
    }
    void helper(TreeNode* root,TreeNode*& prev,TreeNode*& ret)
    {
        if(root==NULL)
        {
            return;
        }
        helper(root->left,prev,ret);
        if(prev)
        {
            prev->right=root;
        }
        else
        {
            ret=root;
        }
        root->left=NULL;
        prev=root;
        helper(root->right,prev,ret);
    }
};