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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
    if(root==NULL)
    {
        return NULL;//base case
    }
        if(root->val>=low && root->val<=high)
        {
            //we are including this node and now we apply recursion for left and right subtree
            root->left=trimBST(root->left,low,high);
            root->right=trimBST(root->right,low,high);//two recursion calls will bring the right answers //assumption
        }
        else if(root->val<low)
        {
            //it should be discarded however the right subtree can have values in the range hence recurse to right subtree
            return trimBST(root->right,low,high);
        }
        else if(root->val>high)
        {
            //recurse to left subtree
            return trimBST(root->left,low,high);
        }
        return root;
    }
};