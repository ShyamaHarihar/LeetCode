/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
    swap(node->val,node->next->val);
    // 4->5->1->9
    // to delete 5
    //swap 5 and 1
    // 4->1->5->9
    node->next=node->next->next;
    }
};