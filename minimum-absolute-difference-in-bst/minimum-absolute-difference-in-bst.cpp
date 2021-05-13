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
    vector<int> v;
    void inorder(TreeNode* root)
    {
        if(root->left)
        {
            inorder(root->left);
        }
        v.push_back(root->val);
        if(root->right)
        {
            inorder(root->right);
        }
        
    }
    int getMinimumDifference(TreeNode* root) {
    inorder(root);
        int min=INT_MAX;
        for(int i=1;i<v.size();i++)
        {
            if((v[i]-v[i-1])<min)
            {
                min=abs(v[i]-v[i-1]);
            }
        }
        return min;
    }
};