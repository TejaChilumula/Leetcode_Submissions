// Last updated: 7/2/2025, 11:51:02 PM
class Solution {
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        if (grid.empty()) return 0;
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> visited(n, vector<int>(m, 0));
        //vector<vector<int>> dp(n, vector<int>(m, -1));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                //cout << "Starting DFS at (" << i << ", " << j << ")" << endl;
                if (grid[i][j] != 0) {
                    ans = max(ans, dfs(grid, visited, i, j, n, m));
                }
            }
        }
        return ans;
    }

    int dfs(vector<vector<int>>&grid, vector<vector<int>> &visited, int i, int j, int n, int m )
    {
        if (i < 0 || i >= n || j < 0 || j >= m || visited[i][j] == 1 || grid[i][j] == 0) return 0;

        visited[i][j] = 1;
        int res = grid[i][j];
        int maxGold = 0;

        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, 1, 0, -1};
        for (int k = 0; k < 4; k++) {
            int ni = i + dx[k];
            int nj = j + dy[k];
            maxGold = max(maxGold, dfs(grid, visited, ni, nj, n, m));
        }

        visited[i][j] = 0;
        return maxGold + res;


    }

   
};
