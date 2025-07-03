// Last updated: 7/2/2025, 11:52:12 PM
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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode *cur = head;
        ListNode *prev = NULL;
        vector<ListNode*> ans;
        int len = 0;

        // length
        while(cur!=NULL)
        {
            len++;
            cur=cur->next;
        }

        cur = head;
        int extra = len%k;
        int part_size = len/k;


        while(head!=NULL)
        {
            int each = part_size;
            ans.push_back(cur);

            while(each > 0)
            {
                prev = cur;
                cur=cur->next;
                each--;
            }

            if(cur != NULL && extra != 0)
            {
                extra--;
                prev = cur;    
                cur = cur->next;
            }

            // breaking the chain

            if(prev != NULL)
            {
                head = cur;
                prev->next = NULL;
            }

        
        }

        while(ans.size() != k)
        {
            ans.push_back(NULL);
        }

        return ans;
        
    }
};