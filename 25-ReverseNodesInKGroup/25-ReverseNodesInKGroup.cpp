// Last updated: 7/2/2025, 11:55:29 PM
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        // initially we need the length to tackle the last part;

        ListNode *temp = head;
        int len = 0;
        while(temp){
            len++;
            temp = temp->next;
        }

        return reverseLL(head, len, k);
    }

    ListNode* reverseLL(ListNode* head, int len, int k){
        if(len < k) return head;

        ListNode *next, *dummy, *prev;
        prev = head;
        for(int i=0;i<k;i++){
            next = head->next;
            head->next = dummy;
            dummy = head;
            head = next;
        }

        prev->next = reverseLL(head, len-k, k);

        return dummy;

    }
};