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
        if(root==NULL)
        {
            return;
        }
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
    inorder(root);
    TreeNode* root1=new TreeNode(v[0]);
        TreeNode* root2=root1;
        for(int i=1;i<v.size();i++)
        {
            TreeNode* t=new TreeNode(v[i]);
            root1->right=t;
            root1=t;
        }
        return root2;
    }
};