// Last updated: 7/2/2025, 11:52:34 PM
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        vector<vector<int>> ans;

        ans.push_back({points[0][0], points[0][1]});

        vector<int> point{points[0][0], points[0][1]};
        int total = 0;

        for(int i=1;i<points.size();i++){
            if(points[i][0] > point[1])
                {
                    //ans.push_back({points[i][0], points[i][1]});
                    point[0] = points[i][0];
                    point[1] = points[i][1];
                    total++;
                }
            else{
                //auto prev = ans[ans.size()-1];
                //ans.pop_back();
                point[0] = max(point[0], points[i][0]);
                point[1] = min(point[1], points[i][1]);

                //ans.push_back(prev);
            }
        }
    
    return total+1;

    }
};