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
    int totalcamera;
    int minCameraCover(TreeNode* root) {
    totalcamera=0;
        pair<bool,bool> temp=helper(root);
        if(!temp.second)
        {
            totalcamera++;
        }
        return totalcamera;
    }
    pair<bool,bool> helper(TreeNode* root)
    {
        if(root==NULL)
        {
            return {false,true};
        }
        pair<bool,bool> L=helper(root->left);
        pair<bool,bool> R=helper(root->right);
        bool camera=false;
        bool monitored=false;
        if(L.first || R.first) //if it has a camera , it is monitored 
        {
            monitored=true;
        }
        if(!L.second  || !R.second)// both of them are not monitored then we can add a camera
        {
            monitored=true;
            camera=true;
            totalcamera++;
        }
        return {camera,monitored};
    }
};