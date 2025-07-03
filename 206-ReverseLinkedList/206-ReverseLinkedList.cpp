// Last updated: 7/2/2025, 11:53:18 PM
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
        ListNode* dummy = NULL;
        //dummy->next = head;

        while(head){
            ListNode* next = head->next;
            head->next = dummy;
            dummy = head;
            head = next;
        }
        return dummy;
    }
};