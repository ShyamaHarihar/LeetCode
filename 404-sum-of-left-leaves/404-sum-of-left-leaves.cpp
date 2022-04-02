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
    int helper(bool flag,TreeNode* root,int& sum)
    {
        
        if(root==NULL)
        {
            return 0;
        }
        helper(true,root->left,sum);
        helper(false,root->right,sum);
        if(root->left==NULL && root->right==NULL && flag==true)
        {
            sum+=root->val;
        }
        return sum;
    }
    int sumOfLeftLeaves(TreeNode* root) {
    int sum=0;
    bool flag=false;
    return helper(flag,root,sum);
    }
};