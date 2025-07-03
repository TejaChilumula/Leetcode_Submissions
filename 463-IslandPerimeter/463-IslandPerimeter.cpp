// Last updated: 7/2/2025, 11:52:32 PM
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
         int n = grid.size();
        int m = grid[0].size();
        int perimeter = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    // Add 4 for the current cell
                    perimeter += 4;

                    // Subtract 2 for each adjacent land cell (shared edges)
                    if (i > 0 && grid[i - 1][j] == 1) perimeter -= 2; // Check top
                    if (j > 0 && grid[i][j - 1] == 1) perimeter -= 2; // Check left
                }
            }
        }

        return perimeter;

        
//         queue<pair<int,int>> q;
//         int n = grid.size();
//         int m = grid[0].size();
        
//         for(int i=0;i<n;i++)
//         {
//             for(int j = 0;j<m;j++)
//             {
//                 if(grid[i][j] == 1)
//                 {
//                     q.push({i,j});
//                     grid[i][j] = -1;
//                     break;
//                 }
//             }
//         }
        
        
//         int size = 0;
//         while(!q.empty())
//         {
//             int r = q.front().first;
//             int c = q.front().second;
            
//             q.pop();
//             size += 4;
            
//             vector<int>dx = {-1,0,0,1};
//             vector<int> dy = {0,-1,1,0};
            
//             for(int i=0;i<4;i++)
//             {
//                 int nx = dx[i]+r;
//                 int ny = dy[i]+c;
                
//                 if(nx >= 0 && nx < n && ny >= 0 && ny < m)
//                 {
//                     if(grid[nx][ny] == 1){
//                     size--;
//                     grid[nx][ny] = -1;
//                     q.push({nx,ny});
//                     }
//                     else if(grid[nx][ny] == -1) size--;
                    
//                 }
                
//             }
            
//         }
        
//         return size;
        
    }
};