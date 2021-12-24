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
    ListNode* reverse(ListNode* head)
    {
        if(head==NULL)
        {
            return head;
        }
        ListNode* prev=NULL,* curr=head,* n=head->next;
        while(curr!=NULL)
        {
            curr->next=prev;
            prev=curr;
            curr=n;
            if(n) n=n->next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
    ListNode* slow=head,* fast=head;
//now we need to find the node one behind the middle and therefore, we need to change the condition
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    //slow points to one node behind mid
    slow->next=reverse(slow->next);
    ListNode* start=head,* mid=slow->next;
    while(mid!=NULL)
    {
        if(start->val!=mid->val)
        {
            return false;
        }
        start=start->next;
        mid=mid->next;
    }
    slow->next=reverse(slow->next);//do not change the datastructure so undo it
        return true;    
    }
};