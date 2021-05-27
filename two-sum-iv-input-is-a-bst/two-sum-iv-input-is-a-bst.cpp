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
    bool dfs(TreeNode* root,unordered_map<int,int>& map,int k)
    {
        if(root==NULL)
        {
            return false;
        }
        if(map.find(k-root->val)!=map.end())
        {
            return true;
        }
        map[root->val]=root->val;
        return dfs(root->left,map,k) || dfs(root->right,map,k);
    }
    bool findTarget(TreeNode* root, int k) {
    unordered_map<int,int> map;
    return dfs(root,map,k);
    }
};