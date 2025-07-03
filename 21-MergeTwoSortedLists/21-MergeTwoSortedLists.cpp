// Last updated: 7/2/2025, 11:55:33 PM
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        /*ListNode *newh =new ListNode();
        ListNode *t1 = list1;
        ListNode *t2 = list2;
        ListNode *h = newh;
        while(t1 != NULL && t2 != NULL)
        {
            if(t1->val < t2->val)
            {
                newh->next = new ListNode(t1->val);
                newh = newh->next;
                t1 = t1->next;

            }
            else
            {
                newh->next = new ListNode(t2->val);
                newh = newh->next;
                t2 = t2->next;
            }
        }

        while(t1 != NULL) 
        {
                newh->next  = new ListNode(t1->val);
                newh = newh->next;
                t1 = t1->next;
        }
        while(t2 != NULL) 
        {
            newh->next = new ListNode(t2->val);
                newh = newh->next;
                t2 = t2->next;
        }
        return h->next;
        */

        if(list1 == NULL ) return list2;
        if( list2 == NULL ) return list1;
        ListNode *head;
        if(list1->val > list2->val)
        {
            ListNode *temp = list1;
            list1 = list2;
            list2 = temp;
        }

        head = list1;

        while(list1 != NULL && list1 != NULL && list2 != NULL)
        {
            ListNode *t1 = NULL;
            while(list1 != NULL && list1->val <= list2->val)
            {
                t1 = list1;
                list1 = list1->next;

            }

            t1->next = list2;
             
             ListNode *temp = list1;
             list1 = list2;
             list2 = temp;
        }

        return head;
    }
};