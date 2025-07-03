// Last updated: 7/2/2025, 11:55:30 PM
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
   /* ListNode* swapPairs(ListNode* head) {
        
        ListNode *dummy = new ListNode();

        dummy->next = head;

        ListNode *prev = dummy;
        ListNode *cur = head;

        while(cur && cur->next)
        {
            prev->next = cur->next;
            cur->next = cur->next->next;

            prev->next->next = cur;
            prev = cur;
            cur = cur->next;
        }

        ListNode *result = dummy->next;
        delete dummy;
        return result;
    }
    */

    ListNode* swapPairs(ListNode* head) {

        if(!head || !head->next) return head;

        ListNode *next = head->next;

        head->next = swapPairs(next->next);

        next->next = head;

        return next;
    }



};