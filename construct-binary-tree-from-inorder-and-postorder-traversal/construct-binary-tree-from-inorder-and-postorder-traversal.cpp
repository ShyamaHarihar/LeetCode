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
    TreeNode* build(vector<int> &inorder,vector<int> &postorder,int s,int e,int &i)
    {
        if(s>e)
        {
            return NULL;
        }
        int index=-1;
        TreeNode* root=new TreeNode(postorder[i]);
        for(int j=s;j<=e;j++)
        {
            if(postorder[i]==inorder[j])
            {
                index=j;
                break;
            }
        }
        i--;
        root->right=build(inorder,postorder,index+1,e,i);
        root->left=build(inorder,postorder,s,index-1,i);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int s=0;
        int e=inorder.size()-1;
        // to traverse the postorder array 
        //The last element of postorder vector has the root node 
        //then we keep traversing from the end to build right subtree and left subtree 
        //Find the element from the end of postorder array in inorder array and what is in             left is leftsubtree and what is in right would be rightsubtree 
        int i=postorder.size()-1;
        return build(inorder,postorder,s,e,i);
        
        
    }
};