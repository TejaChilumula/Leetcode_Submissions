// Last updated: 7/2/2025, 11:50:57 PM
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
    int getDecimalValue(ListNode* head) {
        int sum = 0, dec = 0;
        vector<int>v;
        ListNode *temp = head;

        while(temp != NULL)
        {
            v.push_back(temp->val);
            temp = temp->next;
        }

        reverse(v.begin(),v.end());
        
        for(int i= 0;i<v.size();i++)
        {
            sum += pow(2, i)*v[i];
        }

        return sum;
    }
};