// Last updated: 7/2/2025, 11:50:29 PM
class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        
        int ans =0;

        for(int i=1;i<colors.size();i++)
        {
            if(colors[i] == colors[i-1])
            {
                ans += min(neededTime[i], neededTime[i-1]);
                neededTime[i] = max(neededTime[i], neededTime[i-1]);
            }
        }

        return ans;
    }
};