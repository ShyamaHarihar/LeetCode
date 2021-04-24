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
     if(root==NULL)
     {
         return NULL;
     }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* f=q.front();
            q.pop();
            if(f->left!=NULL)
            {
                q.push(f->left);
            }
            if(f->right!=NULL)
            {
                q.push(f->right);
            }
            swap(f->left,f->right);
        }
        return root;
    }
};