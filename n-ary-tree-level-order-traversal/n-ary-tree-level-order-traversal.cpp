/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
    vector<vector<int>> res;
    if(root==NULL)
    {
        return {};
    }
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            vector<int> c;
            for(int i=0;i<n;i++)
        { 
            Node* t=q.front();
            q.pop();
            c.push_back(t->val);
            for(auto n:t->children)
            {
                q.push(n);
            }  
        }
            res.push_back(c);
        }
        return res;
    }
};