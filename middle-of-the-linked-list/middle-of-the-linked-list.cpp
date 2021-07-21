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
        while(f && f->next)
        {
            f=f->next->next;
            s=s->next;
        }
        return s;
    }
};