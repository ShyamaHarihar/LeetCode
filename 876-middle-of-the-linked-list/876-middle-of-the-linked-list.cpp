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
    ListNode* s=head;
        ListNode* f=head;
        while(f!=NULL && f->next!=NULL)//this condition is because when odd number of elements are there, f has reached last place and when even f has reached NULL beyond the list and this is also because we want to return second of middle when there are two middle nodes
        {
           s=s->next;
           f=f->next->next;
        }
        return s;
    }
};