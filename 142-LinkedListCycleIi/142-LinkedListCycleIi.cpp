// Last updated: 7/2/2025, 11:53:40 PM
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
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;

        if(head == nullptr || head->next == nullptr) return NULL;

        while(fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow) 
            {
                while(slow != head)
                {
                    slow = slow->next;
                    head = head->next;
                }

                return head;
            }

               
        }

            return NULL;
        }
    
    };