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
    int getDecimalValue(ListNode* head) {
    ListNode* temp=head;
    int ans=0;
    //Assume that it is 2 power 0 at the start and then when we discover new nodes, just   multiply by 2 
    while(temp!=NULL)
    {
        ans*=2;
        ans+=temp->val;
        temp=temp->next;
    }
        return ans;
    }
};