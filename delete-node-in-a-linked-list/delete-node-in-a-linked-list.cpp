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
    if(node->next==NULL)
    {
        //it is a tail node
        delete node;
    }
    //1->2->3->4 to delete 2 we can swap 2 and 3
        //1->3->2->4 //now we can delete 2 by usual techniques
        swap(node->val,node->next->val);
        ListNode* temp2=node->next;
        node->next=temp2->next;
        delete temp2;
    }
};