// Last updated: 7/2/2025, 11:53:04 PM
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
    bool isPalindrome(ListNode* head) {
        /*
        ListNode *temp = head;
        vector<int> rev;

        while(temp!=NULL)
        {
            rev.push_back(temp->val);
            temp = temp->next;
        }

        for(int i=0;i<rev.size()/2;i++)
        {
            if(rev[i] != rev[rev.size()-i-1]) return false;
        }

        return true;
        */

        // Reverse the second half and compare

        ListNode *slow = head;
        ListNode *fast = head;

        while(fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }

        ListNode *rev = reverse(slow);
        slow->next = NULL;

        while(head != NULL && rev != NULL)
        {
            if(head->val != rev->val) return false;
            head = head->next;
            rev = rev->next;
        }

        return true; 
        
    }

    public: ListNode* reverse(ListNode *cur)
    {
        ListNode *dummy = NULL;
        ListNode *next = NULL;

        while(cur != NULL)
        {
            next = cur->next;
            cur->next = dummy;
            dummy = cur;
            cur = next;
        }
        return dummy;
    }
};