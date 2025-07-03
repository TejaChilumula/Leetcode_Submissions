// Last updated: 7/2/2025, 11:53:48 PM
class Solution {
    public:
void bfs(int r, int c, vector<vector<char>>& board, vector<vector<bool>>& vis) {
        vis[r][c] = true;
        queue<pair<int, int>> q;
        q.push({r, c});

        while (!q.empty()) {
            int rr = q.front().first;
            int cc = q.front().second;
            q.pop();

            int dr[] = {1, -1, 0, 0};
            int dc[] = {0, 0, 1, -1};

            for (int i = 0; i < 4; ++i) {
                int nr = rr + dr[i];
                int nc = cc + dc[i];

                if (nr >= 0 && nr < board.size() && nc >= 0 && nc < board[0].size() 
                    && board[nr][nc] == 'O' && !vis[nr][nc]) {
                    vis[nr][nc] = true;
                    q.push({nr, nc});
                }
            }
        }
    }

    void solve(vector<vector<char>>& board) {
        int n = board.size();
        if (n == 0) return;
        int m = board[0].size();
        
        vector<vector<bool>> vis(n, vector<bool>(m, false));

        for (int i = 0; i < n; ++i) {
            if (board[i][0] == 'O' && !vis[i][0]) bfs(i, 0, board, vis);
            if (board[i][m - 1] == 'O' && !vis[i][m - 1]) bfs(i, m - 1, board, vis);
        }
        for (int j = 0; j < m; ++j) {
            if (board[0][j] == 'O' && !vis[0][j]) bfs(0, j, board, vis);
            if (board[n - 1][j] == 'O' && !vis[n - 1][j]) bfs(n - 1, j, board, vis);
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (!vis[i][j] && board[i][j] == 'O') {
                    board[i][j] = 'X';
                }
            }
        }
    }
};