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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>> res;
        if(root==NULL)
        {
            return res;
        }
    queue<TreeNode*> q;
    q.push(root);
    int level=0;
        while(!q.empty())
        {
            int n=q.size();
            vector<int> r(n,0);
            for(int i=0;i<n;i++)
            {
                TreeNode* f=q.front();
                q.pop();
                if(level==0)
                {
                    r[i]=f->val;
                }
                else{
                    r[n-i-1]=f->val;
                }
                if(f->left)
                {
                    q.push(f->left);
                }
                if(f->right)
                {
                    q.push(f->right);
                }
            }
            level=!level;
            res.push_back(r);
        }
        return res;
    }
};