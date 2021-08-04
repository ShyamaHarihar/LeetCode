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
    vector<vector<int>> res;
        vector<int> path;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
      
        helper(root,targetSum);
        return res;
    }
    void helper(TreeNode* root,int sum)
    {
        if(!root)
        {
            return;
        }
        path.push_back(root->val);
        sum=sum-root->val;
        if(!root->left && !root->right && sum==0)
        {
            res.push_back(path);
        }
        helper(root->left,sum);
        helper(root->right,sum);
        path.pop_back();//backtracking and i have not fully understood feeling sleepy lol
    }
};