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
    TreeNode* deleteNode(TreeNode* root, int key) {
    //base case 
        if(root==NULL)
    {
        return root;
    }
        //Go to left Subtree 
        if(root->val>key)
        {
            root->left=deleteNode(root->left,key);
        }
        //Go to right subtree
        else if(root->val<key)
        {
            root->right=deleteNode(root->right,key);
        }
        //Node found case 
        else {
            //We have three cases here 
//Node found and to be deleted is leaf node and in this case simply return NULL to the parent node
            if(root->left==NULL && root->right==NULL)
            {
                return NULL;
            }
            //Only one child case 
            if(root->left==NULL || root->right==NULL)
            {
                TreeNode* temp=root->left?root->left:root->right;//if left is there copy left else copy right 
                delete(root);
                return temp;
                //The whole subtree has to be returned actually not just one node otherwise we could have swapped
            }
//Node with two children where we have to use inorder predecessor or inorder successor 

               if(root->left && root->right)
               {
                   TreeNode* t=root->right;//First go to right subtree to find the leftmost value or minimum value which is the inorder predecesssor 
                   while(t->left!=NULL)
                   {
                       t=t->left;
                   }
                   root->val=t->val;
                   //Now we have a duplicate value in the right subtree now this is a 0 or 1 child case so delete that duplicate now
                   root->right=deleteNode(root->right,root->val);
               }
        }
     //returning updated root
        return root;
    }
};