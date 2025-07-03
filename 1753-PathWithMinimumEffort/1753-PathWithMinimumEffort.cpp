// Last updated: 7/2/2025, 11:50:27 PM
class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        // what we need is an path which should have the max absolute diff in the path of any node is min
        // crazyyy

        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int,pair<int, int>>>> pq;

        //int diff = 0;

        int n = heights.size();
        int m = heights[0].size();

        vector<vector<int>> dist(n,vector<int>(m,1e9));
        dist[0][0] = 0;

        pq.push({0,{0,0}});

        while(!pq.empty())
        {
          int diff = pq.top().first;
          int r = pq.top().second.first;
          int c = pq.top().second.second;
          pq.pop();

          if(r == n-1 && c == m-1) return diff;
          // why here ?
          // because it has reached from all the different sides if you check at the end it might not reached in the min 
          // path with max(absolute) way

          vector<pair<int,int>> dir{{1,0}, {-1,0}, {0,1}, {0,-1}};

          for(int i=0;i<4;i++)
          {
            int new_r = r + dir[i].first;
            int new_c = c + dir[i].second;

            if(new_r >= 0 && new_r < n && new_c >= 0 && new_c <m)
            {
              int newEfforts = max(abs(heights[r][c] - heights[new_r][new_c]), diff);
              // we need to find out whether the max absolute of this path till now is the max or the curr is max

              if(newEfforts < dist[new_r][new_c])
              {
                dist[new_r][new_c] = newEfforts;
                pq.push({newEfforts, {new_r,new_c}});
              }
            }
           }
        }
        return -1;
    }
};