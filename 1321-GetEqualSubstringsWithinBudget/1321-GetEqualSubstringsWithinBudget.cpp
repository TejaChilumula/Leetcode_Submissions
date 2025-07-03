// Last updated: 7/2/2025, 11:51:04 PM
class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int start = 0, end =0, maxChar = 0, cost = 0;
        vector<int> mp(256,0);

        while(end < s.size())
        {
            int cost = abs(s[end] - t[end]);

            maxCost -= cost;

            if(maxCost < 0)
            {
                maxCost += abs(s[start] - t[start]);
                start++;
            }

            maxChar = max(maxChar, end - start +1);
            end++;
        }

        return maxChar;
    }
};