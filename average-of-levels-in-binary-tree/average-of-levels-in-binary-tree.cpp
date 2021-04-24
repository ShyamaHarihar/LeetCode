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
    vector<double> averageOfLevels(TreeNode* root) {
    vector<double> res;
        if(root==NULL)
        {
            return res;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            double sum=0;
            for(int i=0;i<n;i++)
            {
                TreeNode* f=q.front();
                q.pop();
                sum=sum+f->val;
                if(f->left) 
                {
                    q.push(f->left);
                }
                if(f->right)
                {
                    q.push(f->right);
                }
            }
            res.push_back((double)(sum/n));
        }
        return res;
    }
};