// Last updated: 7/2/2025, 11:52:36 PM
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        int last_min_end = intervals[0][1];
        int c = 0;

        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0] < last_min_end){
                c++;
                last_min_end = min(last_min_end, intervals[i][1]);
                continue;
            }
            else
            last_min_end = intervals[i][1];
        }
        return c;
    }
};