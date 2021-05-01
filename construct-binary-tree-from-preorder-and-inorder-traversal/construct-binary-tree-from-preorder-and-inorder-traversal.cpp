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
    TreeNode* helper(vector<int>&pre,vector<int>& ino,int s,int e,int &i)
    {
        if(s>e)
        {
            return NULL;
        }
        TreeNode* root=new TreeNode(pre[i]);
        int index=0;
        for(int j=s;j<=e;j++)
        {
            if(ino[j]==pre[i])
            {
                index=j;
                break;
            }
        }
        i++;
        root->left=helper(pre,ino,s,index-1,i);
        root->right=helper(pre,ino,index+1,e,i);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    int i=0;
    int s=0;
    int e=inorder.size()-1;
    return helper(preorder,inorder,s,e,i);
    }
};