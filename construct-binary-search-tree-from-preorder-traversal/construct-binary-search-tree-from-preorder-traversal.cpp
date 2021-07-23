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
    TreeNode* helper(int s,int e,vector<int> inorder,vector<int> pre,int& i)
    {
        if(s>e)
        {
            return NULL;
        }
        int index=-1;
        TreeNode* root=new TreeNode(pre[i]);
        for(int j=s;j<=e;j++)
        {
            if(pre[i]==inorder[j])
            {
                index=j;
                break;
            }
        }
        i++;
        root->left=helper(s,index-1,inorder,pre,i);
        root->right=helper(index+1,e,inorder,pre,i);
        
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
    vector<int> inorder(preorder.size(),0);
    vector<int> pre=preorder;
    sort(preorder.begin(),preorder.end());
    inorder=preorder;
    int s=0;
    int e=preorder.size()-1;
    int i=0;
    int j=0; 
    return helper(s,e,inorder,pre,j);
    }
};