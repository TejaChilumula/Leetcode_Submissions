// Last updated: 7/2/2025, 11:49:32 PM
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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        int rl = 0 , cl = 0;
        int rh = m-1;
        int ch = n-1;

        vector<vector<int>> mat(m,vector<int>(n,-1)) ;

        while(head != NULL)
        {
            for(int i=cl ; i<= ch && head!= NULL; i++)
            {
                mat[rl][i] = head->val;
                head = head->next;
            }
            rl++;
            for(int i=rl ; i<= rh && head!= NULL; i++)
            {
                mat[i][ch] = head->val;
                head = head->next;
            }
            ch--;
            for(int i=ch ; i>= cl && head!= NULL ; i--)
            {
                mat[rh][i] = head->val;
                head = head->next;
            }
            rh--;
            for(int i=rh ; i>= rl && head!= NULL; i--)
            {
                mat[i][cl] = head->val;
                head = head->next;
            }
            cl++;


        }
        return mat;
    }
};