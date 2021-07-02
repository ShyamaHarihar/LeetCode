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
    void helper(TreeNode* root,vector<int>& res)
    {
        if(root==NULL)
        {
            return;
        }
        helper(root->left,res);
        res.push_back(root->val);
        helper(root->right,res);
    }
    bool isValidBST(TreeNode* root) {
    vector<int> res;
    vector<int> res1;
        helper(root,res);
        res1=res;
        sort(res.begin(),res.end());
        for(int i=1;i<res.size();i++)
        {
            if(res[i]==res[i-1])
            {
                return false;
            }
        }
        return res1==res;
    }
};