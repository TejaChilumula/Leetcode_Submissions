// Last updated: 7/2/2025, 11:51:23 PM
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
    vector<int> nextLargerNodes(ListNode* head) {
        // Brute force 

       /* 
        vector<int> arr;
        int len = 0;
        ListNode *temp = head;
        while(temp!= NULL)
        {
            arr.push_back(temp->val);
            temp = temp->next;
            len++;
        }
        vector<int> res(len, -1);
        for(int i = 0 ; i< arr.size();i++)
        {
            for(int j = i+1; j<arr.size();j++)
            {
                if(arr[i] < arr[j])
                {
                    res[i] = arr[j];
                    break;
                }
            }
            res[i] = res[i] == -1 ? 0 : res[i];
        }

        return res;
        */
    

    // Optimized - one pass solution

    vector<int> stack , arr;

    for(auto p=head ; p != nullptr; p = p->next)
    {
        arr.push_back(p->val);
    }

    for(int i = arr.size()-1 ; i >= 0 ;i--)
    {
        auto val = arr[i];
        while(!stack.empty() && stack.back() <= arr[i]) stack.pop_back();

        arr[i] = stack.empty() ? 0 : stack.back();

        stack.push_back(val);

    }

    return arr;
   
    }

};