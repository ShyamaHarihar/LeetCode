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
    bool checkeven(vector<int>& v)
    {
        if((v[0]%2==0))
            return false;
        for(int i=1;i<v.size();i++)
        {
            if((v[i]<=v[i-1]) || (v[i]%2==0))
            {
                return false;
            }
        }
        return true;
    }
    bool checkodd(vector<int>& v)
    {
        if((v[0]%2==1))
            return false;
        for(int i=1;i<v.size();i++)
        {
            if((v[i]>=v[i-1]) || (v[i]%2==1))
            {
                  return false;
            }
        }
        return true;
    }
    bool isEvenOddTree(TreeNode* root) {
    queue<TreeNode*> q;
    int level=0;
    vector<vector<int>> arr;
    if((root->val%2)!=1)
    {
        return false;
    }
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
            level++;
            if(level%2==0)
            {
                bool ans=checkodd(r);
                if(ans==false)
                {
                    return false;
                }
            }
            if(level%2==1)
            {
                bool ans=checkeven(r);
                if(ans==false)
                {
                    return false;
                }
            }
        }
        return true;
    }
};