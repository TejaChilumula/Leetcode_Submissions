// Last updated: 7/2/2025, 11:54:14 PM
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
    ListNode* partition(ListNode* head, int x) {
        ListNode small(0) , big(0);

        ListNode *ptr1 = &small, *ptr2 = &big;

        while(head)
        {
            if(head->val < x)
            {
                ptr1->next = head;
                ptr1 = ptr1->next;

            }

            else{
                ptr2->next = head;
                ptr2 = ptr2->next;
            }

            head = head->next;
        }

        ptr2->next = NULL;
        ptr1->next = big.next;

        return small.next;

    }
};