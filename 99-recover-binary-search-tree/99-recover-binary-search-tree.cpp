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
    void helper(TreeNode* root,vector<TreeNode*>& a)
    {
        if(root==NULL)
        {
            return;
        }
        helper(root->left,a);
        a.push_back(root);
        helper(root->right,a);
    }
    void recoverTree(TreeNode* root) {
    //Brute force solution
        vector<TreeNode*> a;
    helper(root,a);
        int i=0;
        TreeNode* firstwrong,secondwrong;
        for(;i<a.size()-1;i++)
        {
            if(a[i]->val>a[i+1]->val)
            {
               firstwrong=a[i];
                break;
            }
        }
        for(i++;i<a.size();i++)
        {
            if(a[i]->val>firstwrong->val)
            {
                break;
            }
        }
        int temp=firstwrong->val;
        firstwrong->val=a[i-1]->val;
        a[i-1]->val=temp;
    }
};