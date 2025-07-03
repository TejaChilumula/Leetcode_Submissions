// Last updated: 7/2/2025, 11:54:31 PM
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid[0][0] == 1) return 0;
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        return tabular2(m,n, obstacleGrid);
    }

// SO O(1)
int tabular2(int m, int n, vector<vector<int>> &grid)
{
    vector<int> prev(n,0);


    for(int i=0; i<m;i++)
    {
        vector<int> cur(n,0);
        for(int j=0; j<n ; j++)
        {
            int up = 0, left = 0;
            if(grid[i][j] == 1) cur[j] = 0;
            else if(i == 0 && j == 0) cur[j] = 1;
            else
            {
                if(i > 0) up = prev[j];
                if(j > 0 ) left = cur[j-1];
            
            cur[j] = up + left;
            }
            
        }
        prev = cur;
    }

    return prev[n-1];
}
};