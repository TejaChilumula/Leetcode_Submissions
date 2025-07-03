// Last updated: 7/2/2025, 11:51:22 PM
class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
      queue<pair<int,int>> q;
      int n = grid.size();
      int m = grid[0].size();

        for(int i = 0; i< grid.size();i++)
        {
          if(grid[i][0] == 1) {q.push({i,0}); grid[i][0] = 0;};
          if(grid[i][m-1] == 1) {q.push({i,m-1});grid[i][m-1] = 0;};
        }

        for(int i = 0; i< m;i++)
        {
          if(grid[0][i] == 1) {q.push({0,i}); grid[0][i] = 0;};
          if(grid[n-1][i] == 1) {q.push({n-1,i}); grid[n-1][i] = 0;};
        }

        while(!q.empty())
        {
          auto [r,c] = q.front();
          q.pop();
          

          vector<pair<int, int>> dir{{-1,0}, {1,0}, {0,1}, {0,-1}};

          for(int i = 0; i<4;i++)
          {
            int new_r = r + dir[i].first;
            int new_c = c + dir[i].second;

            if(new_r >= 0 && new_r < n && new_c >= 0 && new_c < m && grid[new_r][new_c] == 1)
            {
              q.push({new_r, new_c});
              grid[new_r][new_c] = 0;
              
            }
          }
        }

        int c = 0;

        for(int i=0;i<n;i++)
        {
          for(int j=0;j<m;j++)
          {
            if(grid[i][j] == 1) c++;
          }
        }

      
return c;

    }
};