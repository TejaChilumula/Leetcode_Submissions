// Last updated: 7/2/2025, 11:49:38 PM
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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *temp;
        ListNode *zero;
        temp = head->next;
        zero = head;
        int sum = 0;

        // The reverse way in this way Im just storing the sum to the predecessor 0
        /*
        while(temp != NULL)
        {
            if(temp->val == 0)
            {
                zero->val = sum;
                zero->next=temp;
                if(temp->next != NULL)zero = temp;
                sum = 0;
                
            }
            sum = sum+temp->val;
            temp = temp->next;
        }
        zero->next = NULL;

        return head;
        */

        /// the real way is to replace sum into successor 0 with the previous sum , make sure you should explicitly skip first 0

        while(temp != NULL)
        {
            if(temp->val != 0) 
                sum = sum+temp->val;
            else{
                temp->val = sum;
                sum=0;
                zero->next = temp;
                zero = temp;
            }
            temp = temp->next;
        }
        head = head->next;

        return head;
    }
};