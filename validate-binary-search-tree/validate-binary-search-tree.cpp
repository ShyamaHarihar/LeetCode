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
    void dfs(TreeNode* root,vector<int>& inorder)
    {
        if(root==NULL)
        {
            return;
        }
        dfs(root->left,inorder);
        inorder.push_back(root->val);
        dfs(root->right,inorder);
    }
    bool isValidBST(TreeNode* root) {
    vector<int> inorder;
    dfs(root,inorder);
        vector<int> inorder1=inorder;
        sort(inorder1.begin(),inorder1.end());
        for(int i=1;i<inorder1.size();i++)
        {
            if(inorder1[i-1]==inorder1[i])
            {
                return false;
            }
        }
        if(inorder1==inorder)
        {
            return true;
        }
        
        return false;
    }
};