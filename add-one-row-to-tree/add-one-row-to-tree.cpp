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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1)
        {
            TreeNode* newnode=new TreeNode(val);
            newnode->left=root;
            return newnode;
        }
        queue<TreeNode*> q;
        q.push(root);
        int level=1;
        while(!q.empty())
        {
           level++;
           if(level==depth)
               break;
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
        }
        int size=q.size();
        for(int i=0;i<size;i++)
        {
            TreeNode* temp=q.front();
            q.pop();
            TreeNode* l=temp->left;
            TreeNode* r=temp->right;
            temp->left=new TreeNode(val);
            temp->right=new TreeNode(val);
            temp->left->left=l;
            temp->right->right=r;
        }
        return root;
    }
};