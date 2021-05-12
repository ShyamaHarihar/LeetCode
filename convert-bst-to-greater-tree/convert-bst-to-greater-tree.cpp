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
    int currentsum;
    void reverseinorder(TreeNode* root)
    {
        if(root->right)
        {
            reverseinorder(root->right);
        }
        currentsum+=root->val;
        root->val=currentsum;
        if(root->left)
        {
            reverseinorder(root->left);
        }
    }
    TreeNode* convertBST(TreeNode* root) {
    if(root==NULL)
    {
        return NULL;
    }
        reverseinorder(root);
        return root;
    }
};