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
    void helper(TreeNode* root,vector<int> &arr)
    {
        if(root==NULL)
        {
            return;
        }
        helper(root->left,arr);
        arr.push_back(root->val);
        helper(root->right,arr);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
       vector<int> arr;
       helper(root,arr);
       int res=0;
       for(int i=0;i<arr.size();i++)
       {
           if(arr[i]>=low && arr[i]<=high)
           {
               res+=arr[i];
           }
       }
        return res;
    }
};