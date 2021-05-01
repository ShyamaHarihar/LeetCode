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
        //Calculate size of the List
        while(t)
        {
            t=t->next;
            size++;
        }
        //If it is 2 from end then it is size-2 from beginning 
        int index=size-n;
        //if the node to be deleted from the beginning has a position 0 that means return head->next which is a corner case
        if(index==0)
        {
            head=head->next;
            return head;
        }
        t=head;
        ListNode* p=NULL;
        int i=0;
        t=head;
        //Normal iteration storing previous node 
        while(i<index && t->next!=NULL)
        {
            p=t;
            t=t->next;
            i++;
        }//Way to skip a node and connect them 
        p->next=p->next->next;
        return head;
    }
};
