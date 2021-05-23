/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
    vector<int> res;
    ListNode* temp=head;
    while(temp)
    {
        ListNode* t=temp->next;
        bool flag=false;
        while(t)
        {
            if(t->val>temp->val)
            {
                res.push_back(t->val);
                flag=true;
                break;    
            }
            else 
            {
                t=t->next;
            }
        }
        temp=temp->next;
        if(flag==false)
        {
            res.push_back(0);
        }
    }
        return res;
    }
};