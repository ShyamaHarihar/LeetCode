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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
    ListNode* temp1=list1;
    ListNode* temp2=list1;
    ListNode* tail=list2;
    for(int i=1;i<a;i++)
    {
        temp1=temp1->next;
    }
    for(int i=1;i<b+1;i++)
    {
        temp2=temp2->next;
    }
    while(tail->next)
    {
        tail=tail->next;
    }
    // cout<<temp1->val<<" "<<tail->val<<" "<<temp2->val;
    temp1->next=list2;
    tail->next=temp2->next;
    return list1;
    }
};