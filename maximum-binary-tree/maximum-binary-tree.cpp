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
    TreeNode* build(int s,int e,vector<int> nums)
    {
      if(s>e)
      {
          return NULL;
      }
        int maxindex=s;
        for(int i=s;i<=e;i++)
        {
         if(nums[i]>nums[maxindex])
        {
           maxindex=i;
        }
        }
      TreeNode* root=new TreeNode(nums[maxindex]);
      root->left=build(s,maxindex-1,nums);
      root->right=build(maxindex+1,e,nums); 
      return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
    int s=0;
    int e=nums.size()-1;
    return build(s,e,nums);
    }
};