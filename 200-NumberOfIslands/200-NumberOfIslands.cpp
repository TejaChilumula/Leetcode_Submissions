// Last updated: 7/2/2025, 11:53:20 PM
class Solution {
public:

    void bfs(vector<vector<char>> &grid, vector<vector<int>> &vis, int row, int col)
    {
        vis[row][col] = 1;

        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int,int>> q;

        q.push({row,col});


        while(!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;

            q.pop();

            vector<pair<int,int>> d{{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

            for(auto i : d){


                    int rowdir = row+i.first;
                    int coldir = col+i.second;

                    if(
                        coldir >= 0 && coldir < m &&
                    rowdir >= 0 && rowdir < n &&
                    !vis[rowdir][coldir] && 
                    grid[rowdir][coldir] == '1'
                       )
                    {
                        vis[rowdir][coldir] = 1;
                        q.push({rowdir,coldir});
                    }

        }

        }

        
    }

    void dfs(vector<vector<char>> &grid, vector<vector<int>> &vis, int row, int col)
    {

        int n = grid.size();
        int m = grid[0].size();
        vis[row][col] = 1;

        vector<pair<int, int>> d {{1,0}, { -1, 0}, {0,1}, {0,-1}};

        for( auto i : d)
        {
            int rowdir = row + i.first;
            int coldir = col + i.second;

            if(
                coldir >= 0 && coldir < m &&
                rowdir >= 0 && rowdir < n &&
                !vis[rowdir][coldir] && 
                grid[rowdir][coldir] == '1'
                       )
                       {
                           dfs(grid, vis, rowdir, coldir);
                       }
        }
    }
    int numIslands(vector<vector<char>>& grid) {

        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        
        int cnt = 0;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j] && grid[i][j] == '1')
                {
                    cnt++;
                    dfs(grid, vis, i, j);

                }
            }
        }
        return cnt;
    }
};