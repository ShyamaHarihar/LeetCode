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
    void reverseinorder(TreeNode* root,int &sum)
    {
        if(root->right)
        {
            reverseinorder(root->right,sum);
        }
        sum=sum+root->val;
        root->val=sum;
        if(root->left)
        {
            reverseinorder(root->left,sum);
        }
    }
    TreeNode* bstToGst(TreeNode* root) {
        int sum=0;
        reverseinorder(root,sum);
        return root;
    }
};