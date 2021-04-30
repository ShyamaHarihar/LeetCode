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
        return max(ls,rs)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        int opt2=height(root->left);
        int opt3=height(root->right);
        int opt1=opt2+opt3;
        int opt4=diameterOfBinaryTree(root->left);
        int opt5=diameterOfBinaryTree(root->right);
        return max(opt1,max(opt4,opt5));
    }
};