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
    vector<vector<int>> dfs(TreeNode* root)
    {
        if(root==NULL)
        {
            return res;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            vector<int> r(n,0);
            for(int i=0;i<n;i++)
            {
                TreeNode* f=q.front();
                q.pop();
                r[i]=f->val;
                if(f->left)
                    q.push(f->left);
                if(f->right)
                    q.push(f->right);
            }
            res.push_back(r);
        }
        return res;
    }
    int deepestLeavesSum(TreeNode* root) {
    vector<vector<int>> a=dfs(root);
    int n=a.size();
    int m=a[n-1].size();
        int sum=0;
        for(int i=0;i<m;i++)
        {
            sum+=a[n-1][i];
        }
        return sum;
    }
};