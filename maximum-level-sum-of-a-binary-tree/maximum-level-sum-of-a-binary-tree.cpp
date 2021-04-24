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
    int maxLevelSum(TreeNode* root) {
        if(root==NULL)
        {
            return 0; 
        }
        queue<TreeNode*> q;
        int m=INT_MIN;
        int ml=INT_MIN;
        q.push(root);
        int level=0;
        int sum;
        while(!q.empty())
        {
            int n=q.size();
            sum=0;
            for(int i=0;i<n;i++)
            {
                TreeNode* f=q.front();
                sum=sum+f->val;
                q.pop();
                if(f->left)
                {
                    q.push(f->left);
                }
                if(f->right)
                {
                    q.push(f->right);
                }
            }
            level++;
            if(sum>m)
            {
                m=sum;
                ml=level;
            }
        }
        return ml;
            
        }
    
};