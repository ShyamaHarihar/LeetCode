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
    //l indicates left node and r indicates right node
    bool helper(TreeNode* l,TreeNode* r)
    {
        if(l==NULL || r==NULL)
        {
            if(l==NULL && r==NULL)
            {
                return true;//both are empty return true
            }
            else{
                return false;//if either of them is NULL return false (bottom up)
            }
        }
        if(l->val != r->val)
        {
            return false;//if either of them don't match in terms of value return false (bottom-up)
        }
        return helper(l->left,r->right) && helper(l->right,r->left);
    }
    bool isSymmetric(TreeNode* root) {
    //If the root is NULL then the tree is considered to be symmetric
    if(root==NULL)
    {
        return true;
    }
    //now we can call the recursive functions for the left and right subtree by passing it to helper function
    return helper(root->left,root->right);
    }
};