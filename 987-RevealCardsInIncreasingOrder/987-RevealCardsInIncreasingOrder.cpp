// Last updated: 7/2/2025, 11:51:37 PM
class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        // STEP BY STEP
        
        int len = deck.size(),i=0;
        deque<int> dq;

        vector<int> ans(len,0);

        sort(deck.begin(), deck.end());

        for(int i=0;i<len;i++)
            dq.push_back(i);

        while(!dq.empty() && i<len)
        {
            int idx = dq.front();
            dq.pop_front();

            ans[idx] = deck[i];

            dq.push_back(dq.front());
            dq.pop_front();

            i++;

        }

        return ans;
    }
};