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
    TreeNode* helper(vector<int>& pre,vector<int>& ino,int &i,int s,int e)
    {
        if(s>e)
        {
            return NULL;
        }
        int index=-1;
        TreeNode* root=new TreeNode(pre[i]);
        for(int j=s;j<=e;j++)
        {
            if(ino[j]==pre[i])
            {
                index=j;
                break;
            }
        }
        i++;
        root->left=helper(pre,ino,i,s,index-1);
        root->right=helper(pre,ino,i,index+1,e);
        //return the final tree Node reference
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
    int s=0;
    int i=0; 
    vector<int> ino=preorder;
    int e=preorder.size()-1;
    // sort(preorder.begin(),preorder.end());
    sort(ino.begin(),ino.end());
    return helper(preorder,ino,i,s,e);    
    }
};