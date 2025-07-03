// Last updated: 7/2/2025, 11:49:09 PM
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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *temp, *prev, *next;

        temp = head;

        while(temp->next != NULL)
        {
            ListNode *gcd_val = new ListNode();
            gcd_val->val = gcd(temp->val , temp->next->val);
            next = temp->next;
            temp->next = gcd_val;
            gcd_val->next = next;

            temp = temp->next->next;
        }
        return head;
    }
    int gcd(int a, int b)
    {
        if(a == 0) return b;
        if(b == 0) return a;

        if(a > b) return gcd(a-b,b);
        return gcd(b-a,a);
    }
};