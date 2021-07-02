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
TOP DOWN o(n*n)
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
        {
            return true;
        }
        if(abs(height(root->left)-height(root->right))>1)
        {
            return false;
        }
        return isBalanced(root->left) && isBalanced(root->right);
    }
    int height(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        return max(height(root->left),height(root->right))+1;
    }
};
BOTTOM UP O(n)
    class Solution {
public:
    bool isBalanced(TreeNode* root) {
    if(root==NULL)
    {
        return true;
    }
        return height(root)!=-1;
    }
    int height(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int l=height(root->left);
        int r=height(root->right);
        int bf=abs(l-r);
        if(bf>1 || l==-1 || r==-1)
        {
            return -1;
        }
        return max(l,r)+1;
    }
};
