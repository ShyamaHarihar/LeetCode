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
    bool isPalindrome(ListNode* head) {
    string s="";
    ListNode* temp=head;
        while(temp)
        {
            s+=temp->val;
            temp=temp->next;
        }
        string o=s;
        reverse(s.begin(),s.end());
        return s==o;
    }
};