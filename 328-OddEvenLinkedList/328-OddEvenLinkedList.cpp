// Last updated: 7/2/2025, 11:52:46 PM
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
    ListNode* oddEvenList(ListNode* head) {
        
        if(head != NULL){
        ListNode *odd;
        ListNode *even;
        

        odd = head;
        even = head->next;

        ListNode *temp = even;

        while(even != NULL &&  even->next != NULL)
        {
            odd->next = odd->next->next;
            even->next = even->next->next;
            odd = odd->next;
            even = even->next;
        }

        odd->next = temp;
        }

        return head;
    }
};