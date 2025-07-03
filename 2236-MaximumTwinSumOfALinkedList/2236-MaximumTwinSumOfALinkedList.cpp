// Last updated: 7/2/2025, 11:49:42 PM
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
    int pairSum(ListNode* head) {
        int maxsum = 0;
        ListNode *temp = head;

        vector<int> rev;

        while(temp != NULL)
        {
            rev.push_back(temp->val);
            temp=temp->next;
        }

        for(int i=0;i<rev.size();i++)
        {
            maxsum = max(maxsum , rev[i] + rev[rev.size()-1-i]);
        }

        // while(head != NULL)
        // {
        //     temp = head;
        //     while(temp->next!=NULL)
        //     {
        //         temp = temp->next;
        //         int sum = head->val + temp->val;
        //         maxsum = max(maxsum, sum);
        //     }
        //     head = head->next;
        // }
        return maxsum;
    }
};