// Last updated: 7/2/2025, 11:52:40 PM
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
    //Random random;
    ListNode *head;
public:
    
    Solution(ListNode* head) {
        this->head = head;
    }
    
    int getRandom() {
        ListNode *c = this->head;
        int random = 0;
        int i=1;

        while(c)
        {

            if(rand() % i < 1.0/i ) random = c->val;
             c = c->next;
             i++;
        }
        return random;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */