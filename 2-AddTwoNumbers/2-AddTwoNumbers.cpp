// Last updated: 7/2/2025, 11:55:45 PM
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode *dummy = new ListNode();
        ListNode *temp = dummy;

        int c = 0;

        while(l1 != NULL || l2 != NULL || c!=0)
        {
            int sum = 0;
            if(l1 != NULL)
            {
                sum += l1->val;
            }
            if(l2 != NULL)
            {
                sum += l2->val;
            }

            sum += c;
            int rem = sum%10;
            c = sum/10;

            ListNode *newnode = new ListNode(rem);
            temp->next = newnode;
            temp=temp->next;

            l1 = l1 == nullptr ? nullptr : l1->next;
            l2 = l2 == nullptr ? nullptr : l2->next;
            
            
        }

        ListNode *result = dummy->next;
        delete dummy;

        return result;

        
    }
};