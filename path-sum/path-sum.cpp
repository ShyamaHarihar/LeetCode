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
    void dfs(TreeNode* root,int targetSum,bool& flag)
    {
        if(root==NULL)
        {
            return;
        }
        targetSum=targetSum-root->val;
        if(root->left==NULL && root->right==NULL && targetSum==0)
        {
           flag=true;
        }
        dfs(root->left,targetSum,flag);
        dfs(root->right,targetSum,flag);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
    bool flag=false;
    dfs(root,targetSum,flag);
    return flag;    
    }
};