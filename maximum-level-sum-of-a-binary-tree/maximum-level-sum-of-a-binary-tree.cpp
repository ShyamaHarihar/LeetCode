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
    int maxLevelSum(TreeNode* root) {
    if(root==NULL)
    {
        return 0;
    }
    queue<TreeNode*> q;
    q.push(root);
    int sum_m=INT_MIN;
    int answer_m=INT_MIN;
    int sum,answer;
    int level=0;
        while(!q.empty())
        {
            int n=q.size();
            level++;
            sum=0;
            for(int i=0;i<n;i++)
            {
                TreeNode* f=q.front();
                q.pop();
                sum=sum+f->val;
                if(f->left)
                {
                    q.push(f->left);
                }
                if(f->right)
                {
                    q.push(f->right);
                }
            }
            if(sum>sum_m)
            {
                sum_m=sum;
                answer_m=level;
            }
        }
        return answer_m;
    }
};