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
    ListNode* swapNodes(ListNode* head, int k) {
    
        k=k-1;
        ListNode* f=head;
        while(k--)
        {
            f=f->next;
        }
        ListNode* s=head;
        ListNode* a=f;
        while(f->next!=NULL)
        {
            f=f->next;
            s=s->next;
        }
        ListNode* b=s;
        int temp;
        temp=a->val;
        a->val=s->val;
        s->val=temp;
        //swap(a->val,s->val);
        return head;
    }
};