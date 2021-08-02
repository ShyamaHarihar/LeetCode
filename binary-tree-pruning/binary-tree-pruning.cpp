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
    TreeNode* pruneTree(TreeNode* root) {
    //The idea here is to postorder Traversal or Bottom Up Traversal and this is how we use the power of recursion to solve this problem
        if(!root)
        {
            return NULL;
        }
        root->left=pruneTree(root->left);//to take effect of recursive calls code is written like this
        root->right=pruneTree(root->right);
        if(root->left==NULL && root->right==NULL && root->val==0)
        {
            return NULL;
        }
        return root;
    }
};