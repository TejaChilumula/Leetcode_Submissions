// Last updated: 7/2/2025, 11:54:16 PM
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return head;
        ListNode *temp = head;
        while(temp->next != NULL)
        {
            if(temp->val != temp->next->val) temp = temp->next;
            else temp->next = temp->next->next;
            
        }
        return head;
    }
};