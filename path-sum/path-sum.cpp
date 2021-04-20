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
    bool flag=false;
    void dfs(TreeNode* root,int sum)
    {
        if(root==NULL)
        {
            return;
        }
        sum=sum-root->val;
        if(root->left==NULL && root->right==NULL && sum==0)
        {
            flag=true;
            return;
        }
        dfs(root->left,sum);
        dfs(root->right,sum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
    dfs(root,targetSum);
    return flag;
    }
};