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
    TreeNode* helper(int start,int end,vector<int> nums)
    {
        if(start>end)
        {
            return NULL;
        }
        int mid=(start+end)/2;
        TreeNode* root=new TreeNode(nums[mid-1]);
        root->left=helper(start,mid-1,nums);
        root->right=helper(mid+1,end,nums);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int start=1;
        int end=nums.size();
        return helper(start,end,nums);   
    }
};