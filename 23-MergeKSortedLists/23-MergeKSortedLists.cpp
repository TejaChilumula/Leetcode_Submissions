// Last updated: 7/2/2025, 11:55:31 PM
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
      priority_queue<int> pq;

      for(auto i: lists)
      {
        while(i!=NULL)
        {
          pq.push(i->val);
          i = i->next;
        }
      }

      ListNode *head = NULL;
      while(!pq.empty())
      {
        ListNode* n = new ListNode(pq.top());
        pq.pop();
        n->next = head;
        head = n;
      }
        return head;
    }
};