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
    TreeNode* invertTree(TreeNode* root) {
    if(root==NULL) return root;
    queue<TreeNode*>q;
    q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* f=q.front();
                TreeNode* l=NULL;
                TreeNode* r=NULL;
                q.pop();
                if(f->left)
                {
                    q.push(f->left);
                    l=f->left;
                }
                if(f->right)
                {
                    q.push(f->right);
                    r=f->right;
                }
                f->left=r;
                f->right=l;
            }
        }
        return root;
    }
};