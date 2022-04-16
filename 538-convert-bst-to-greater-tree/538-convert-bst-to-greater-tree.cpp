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
    int helper(TreeNode* root,int &sum)
    {
        if(root->right)
        {
            helper(root->right,sum);
        }
        sum=sum+root->val;
        root->val=sum;
        if(root->left)
        {
            helper(root->left,sum);
        }
        return sum;
    }
    TreeNode* convertBST(TreeNode* root) {
    //Use the concept of reverse inorder traversal here 
    if(root==NULL) return NULL;
    int sum=0;
    helper(root,sum);
        return root;
    }
};