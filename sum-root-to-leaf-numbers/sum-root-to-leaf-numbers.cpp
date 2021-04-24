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
    long long res=0;
    void dfs(TreeNode* root,long long ans)
    {
       if(root==NULL)
       {
           return;
       }
        ans=ans*10;
        ans+=root->val;
        //traversing sum 495 like this 4,40*10+9 , 49*10+5=495 and then return and reach at 9 
        //and go to right and 49*10+1=491 and so on 
        if(!root->left && !root->right)
        {
            res+=ans;
            return;//whenever you encounter a leaf node add that value to res
        }
        dfs(root->left,ans);
        dfs(root->right,ans);
        //preorder tarversal 
        
    }
    int sumNumbers(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        //If root is NULL return 0
        dfs(root,0);//call dfs function
        return res;
    }
};