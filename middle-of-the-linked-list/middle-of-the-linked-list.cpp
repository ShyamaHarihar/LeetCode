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
    ListNode* fast=head;
    ListNode* slow=head;
        while(fast!=NULL && fast->next!=NULL)//terminate on these 2 cases
        {
            //in the case of even length fast will point to NULL
            //in the case of odd length fast will reach the tail Node
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
};