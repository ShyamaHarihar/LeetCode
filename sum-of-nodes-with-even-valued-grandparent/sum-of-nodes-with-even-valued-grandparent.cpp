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
    void helper(TreeNode* root,int &sum)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->val%2==0)
        {
            if(root->left)
            {
            if(root->left->left)
            {
                sum=sum+root->left->left->val;
            }
            if(root->left->right)
            {
                sum=sum+root->left->right->val;
            }
            }
            if(root->right)
            {
            if(root->right->left)
            {
                sum=sum+root->right->left->val;
            }
            if(root->right->right)
            {
                sum=sum+root->right->right->val;
            }
            }
        }
        helper(root->left,sum);
        helper(root->right,sum);  
    }
    int sumEvenGrandparent(TreeNode* root) {
        int sum=0;
        helper(root,sum);
        return sum;
    }
};