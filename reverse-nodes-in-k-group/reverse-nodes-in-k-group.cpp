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
    void reverse(ListNode* s,ListNode* e)
    {
        ListNode* prev=NULL,* curr=s,*n=s->next;
        while(prev!=e)
            //here we have no NULL nodes as such but we know that the moment p reaches end node according to parameters then we should stop
        {
        curr->next=prev;
        prev=curr;
        curr=n;
        if(n!=NULL) n=n->next; 
        }
        
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
    //edge cases
    if(head==NULL || head->next==NULL || k==1) return head;
    ListNode* s=head;
    ListNode* e=head;
    int jump=k-1;//k-1 jumps to create first group for the reversal
    while(jump--)
    {
        e=e->next;
        if(e==NULL) return head;//because we might have lesser nodes left to group them as 'k'
    }
        //now we have start and end for the first group
    //now recursion will reverse the rest of the groups
    ListNode* newhead=reverseKGroup(e->next,k);
    reverse(s,e);
    s->next=newhead;
    return e;
    }
};