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
    bool isSymmetric(TreeNode* root) {
     if(root==NULL)
     {
         return true;//if we have root as null then it is considered symmetric
     }
        return isMirror(root->left,root->right);//check for left subtree and right subtree
    }
    bool isMirror(TreeNode* t1,TreeNode* t2)
    {
        if(t1==NULL || t2==NULL)
        {
            if(t1==NULL && t2==NULL)
            {
                return true;
            }
            else{
                return false;
            }
        }
        if(t1->val!=t2->val)
        {
            return false;
        }
        return ((isMirror(t1->left,t2->right)) && (isMirror(t1->right,t2->left)));
    }
};