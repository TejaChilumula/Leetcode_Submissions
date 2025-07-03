// Last updated: 7/2/2025, 11:51:27 PM
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int, int>> q;
        int fresh = 0;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j] == 2)
                    {
                        q.push({i,j});
                        
                    }
                else if(grid[i][j] == 1)
                    fresh++;
            }
        }
        int c =0;
        vector<pair<int, int>> dir {{1,0}, {-1,0}, {0,1}, {0,-1}};

        while(!q.empty() && fresh > 0)
        {
            int size = q.size();
            for(int i=0;i<size;i++)
            {
                pair<int, int> rotten = q.front();
                q.pop();

            for( auto i : dir)
            {
                int nr = rotten.first + i.first;
                int nc = rotten.second + i.second;

                if(nr >= 0 && nc >= 0 
                && nr < n && nc < m 
                && grid[nr][nc] == 1)
                {
                    q.push({nr,nc});
                    grid[nr][nc] = 2;
                    fresh--;
                    
                }       
            }
            }
            c++;
        }

        return fresh == 0 ?  c :  -1;
    }
};