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
    ListNode* reverseList(ListNode* head) {
        //Striver Video done o(n) o(1)
    ListNode* d=NULL;
        //obseerve that 1 points to NULL so we need a dummy node that points to 
        //NULL initially and reverse the links alone.
    ListNode* c=head;
        while(c)
        {
            ListNode* n=c->next;
            c->next=d;
            d=c;
            c=n;
        }
        return d;
    }
};