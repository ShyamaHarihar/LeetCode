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
    int minDepth(TreeNode* root) {
    if(root==NULL)
    {
        return 0;
    }
        queue<TreeNode*> q;
        q.push(root);
        int i=0;
        while(!q.empty())
        {
            int n=q.size();
            i++;
            for(int j=0;j<n;j++)
            {
                TreeNode* f=q.front();
                q.pop();
                if(f->left)
                {
                    q.push(f->left);
                }
                if(f->right)
                {
                    q.push(f->right);
                }
                if(f->left==NULL && f->right==NULL)
                {
                    return i;
                }
            }
            
        }
        return -1;
    }
};