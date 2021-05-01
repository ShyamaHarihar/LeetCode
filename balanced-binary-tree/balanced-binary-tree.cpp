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
    int height(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int ls=height(root->left);
        int rs=height(root->right);
        return 1+max(ls,rs);
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
        {
            return true;
        }
        int ls=height(root->left);
        int rs=height(root->right);
        return ((abs(ls-rs)<=1) && isBalanced(root->left) && isBalanced(root->right));
    }
};