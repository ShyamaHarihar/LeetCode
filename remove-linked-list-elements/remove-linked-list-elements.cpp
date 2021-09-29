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
    ListNode* removeElements(ListNode* head, int val) {
    ListNode* c=head;
        if(head==NULL)
        {
            return NULL;
        }
        while(c->next!=NULL)
        {
            if(c->next->val==val)
            {
                c->next=c->next->next;
            }
            else
            {
                c=c->next;
            }
        }
        if(head->val==val)
        {
            head=head->next;
        }
        return head;
    }
};