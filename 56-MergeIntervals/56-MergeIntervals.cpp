// Last updated: 7/2/2025, 11:55:04 PM
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());

        // instead of push and pop, we can modify the back itself

        for(int i=0;i<intervals.size();i++){
            if(ans.empty() || ans.back()[1] < intervals[i][0]) ans.push_back(intervals[i]);

            if(ans.back()[1] >= intervals[i][0] ) ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            /*{
                int first = ans.back()[0];
                int last = ans.back()[1];
                ans.pop_back();
                ans.push_back({first, max(last,intervals[i][1])});
            }*/
        }

        return ans;
    }
};