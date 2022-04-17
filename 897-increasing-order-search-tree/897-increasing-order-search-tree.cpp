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
    TreeNode* increasingBST(TreeNode* root) {
    TreeNode* head=new TreeNode(0), *p=head;
        stack<TreeNode*> st;
        while(root || !st.empty())
        {
            //push all the elements in left according to inorder traversal
            while(root)//when root is not null push all elements 
            {
                st.push(root);
                root=root->left;
            }
            root=st.top();//the first node or lowest number
            st.pop();//pop the element from stack
            p->right=root;
            root->left=NULL;
            p=p->right;
            root=root->right;
            
        }
        return head->right;
    }
};