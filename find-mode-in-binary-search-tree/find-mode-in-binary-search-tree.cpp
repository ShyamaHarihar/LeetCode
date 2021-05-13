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
    vector<int> findMode(TreeNode* root) {
    vector<int> result;//final answer
    unordered_map<int,int> map;
    int max=INT_MIN;
    if(root==NULL)
    {
        return result;
    }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* f=q.front();
            map[f->val]++;
            q.pop();
            if(f->left!=NULL)
            {
                q.push(f->left);
            }
            if(f->right!=NULL)
            {
                q.push(f->right);
            }
        }
        for(auto it:map)
        {
            if(it.second>max)
            {
                max=it.second;
            }
        }
        for(auto it:map)
        {
            if(it.second==max)
            {
                result.push_back(it.first);
            }
        }
        return result;
    }
};