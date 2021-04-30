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
    ListNode* middleNode(ListNode* head) {
    ListNode* f=head;
    ListNode* s=head;
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        //Here head should not be NULL and head->next is NULL then that means one element in the list 
        while(f && f->next)
        {
            s=s->next;
            f=f->next->next;
        }
        //Basically Two Pointer technique is used but the main thing here is the while loop condition -- fast->next should not be NULL as that shows we reached end of the iteration and fast should also not be NULL that means we crossed the limit 
        return s;
    }
};