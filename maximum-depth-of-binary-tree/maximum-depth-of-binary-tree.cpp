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
    int BFS(TreeNode* root)
    {
        queue<TreeNode*> q;
        q.push(root);
        int count=0;
        if(root==NULL)
        {
            return count;
        } 
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
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
            }
            count++;
        }
        return count;
    }
    int maxDepth(TreeNode* root) {
    return BFS(root);
    }
};