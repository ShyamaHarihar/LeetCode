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
    vector<string> res;
    void dfs(TreeNode* root,string s)
    {
        if(root==NULL)
        {
            return;
        }
        s=s+to_string(root->val);
        if(root->left==NULL && root->right==NULL)
        {
            res.push_back(s);
            return;
        }
        if(root->left!=NULL)
        {
            dfs(root->left,s+"->");
        }
        if(root->right!=NULL)
        {
            dfs(root->right,s+"->");
        }
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root==NULL)
        {
            return res;
        }
        string s="";
        dfs(root,s);
        return res;
    }
};