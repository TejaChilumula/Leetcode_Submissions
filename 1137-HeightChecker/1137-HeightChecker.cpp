// Last updated: 7/2/2025, 11:51:19 PM
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> ans = heights;

        sort(ans.begin(), ans.end());
        int c = 0;

        for(int i=0;i<heights.size();i++)
        {
            if(heights[i] != ans[i]) c++;
        }

        return c;
    }
};