// Last updated: 7/12/2025, 6:29:39 PM
class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        int n = queries.size();
        unordered_map<int,int> balls;
        unordered_map<int, int> used_colors;
        vector<int> ans;

        for(int i=0;i<queries.size();i++){
            int idx = queries[i][0];
            int color = queries[i][1];

            // if ball color and this query color same skip it
            
            if (balls.count(idx) && balls[idx] != color) {
                int old_color = balls[idx];
                if (--used_colors[old_color] == 0)
                    used_colors.erase(old_color);
            }

            if (balls[idx] != color) {
                balls[idx] = color;
                used_colors[color]++;
            }

            ans.push_back(used_colors.size());
            
        }
        return ans;
    }
};