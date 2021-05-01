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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    int size=0;
    ListNode* t=head;
        while(t)
        {
            t=t->next;
            size++;
        }
        int index=size-n;
        if(index==0)
        {
            head=head->next;
            return head;
        }
        t=head;
        ListNode* p=NULL;
        int i=0;
        t=head;
        while(i<index && t->next!=NULL)
        {
            p=t;
            t=t->next;
            i++;
        }
        p->next=p->next->next;
        return head;
    }
};