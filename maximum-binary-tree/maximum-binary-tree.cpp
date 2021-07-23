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
    TreeNode* helper(vector<int> &nums,int s,int end)
    {
        if(s>end)
        {
            return NULL;
        }
        int maxi=s;
        int max=0;
        for(int i=s;i<=end;i++)
        {
            if(nums[i]>max)
            {
                maxi=i;
                max=nums[i];
            }
        }
        TreeNode* root=new TreeNode(nums[maxi]);
        root->left=helper(nums,s,maxi-1);
        root->right=helper(nums,maxi+1,end);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
    int s=0;
    int e=nums.size()-1;
    return helper(nums,s,e);
    }
};