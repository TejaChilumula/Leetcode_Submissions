// Last updated: 7/2/2025, 11:49:23 PM
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
    ListNode* removeNodes(ListNode* head) {

        // Recursive call which take cares from the tail.
        /*
        if( !head) return NULL;
        head->next = removeNodes(head->next);
        return head->next != NULL && head->val < head->next->val ? head->next : head;
    }
    */



    // Monotonic Decreasing stack  - reverse and eating up from the front;

    vector<ListNode*> vec;
    ListNode* temp = head;

    while(temp)
    {
        vec.push_back(temp);
        temp=temp->next;
    }

    reverse(vec.begin() , vec.end());

    stack<ListNode*> st;

    for(ListNode* node: vec)
    {
        if(st.size() == 0)
        {
            st.push(node);
            continue;
        }

        if(st.top()->val <= node->val)
        {
            st.push(node);
        }
    }

    if(st.size()==0) return NULL;

    ListNode* root = st.top();
    ListNode* tail = st.top();
    st.pop();

    while(st.size())
    {

        ListNode* node = st.top();
        st.pop();
        tail->next = node;
        tail = tail->next;
    }
    tail->next = NULL;

    return root;





    /// eating up optimised way

    head = reversell(head);

    for(auto node = head; node!=nullptr && node->next!=nullptr; )
    {
        if(node->val > node->next->val)
        {
            node->next = node->next->next;
        }
        else
        node= node->next;
    }

    return reversell(head);
    }

    ListNode* reversell(ListNode* head)
    {
   
        ListNode*cur = head;
        ListNode*prev = nullptr;

        while(cur!=nullptr)
        {
            swap(cur->next,prev);
            swap(prev, cur);
        }
        return prev;
    }
};