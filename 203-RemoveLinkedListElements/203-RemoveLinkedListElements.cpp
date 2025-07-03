// Last updated: 7/2/2025, 11:53:17 PM
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
    ListNode* removeElements(ListNode* head, int val) {
            if(head == NULL) return head;
            //ListNode *prev;
            ListNode *cur = head;
            //prev = cur;

            // This is for the case all are equal to the 
            // given number ex: [1,1,1,1,1]
            while(head && head->val == val)
            {
                head = head->next;
                if(head == NULL) return NULL;
            }
            /*
            while(cur != NULL)
            {
                if(cur->val != val)
                {
                    prev = cur;
                }  
                else
                    prev->next = cur->next;
                cur = cur->next;
            }
            */

            // with one pointer

            
            ListNode *prev = head;

            while(prev->next != NULL)
            {
                if(prev->next->val == val)
                {
                    prev->next = prev->next->next;
                }
                else
                {
                    prev = prev->next;
                }
            }

            return head;
    }
};