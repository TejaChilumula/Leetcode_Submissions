// Last updated: 7/2/2025, 11:49:56 PM
class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int r = land.size();
        int c = land[0].size();
        vector<vector<int>> vis(r, vector<int>(c, 0));
        vector<vector<int>> res;

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                vector<int> ans(4,0);
                if(land[i][j] == 1 && vis[i][j] == 0)
                {
                    ans[0]=i;
                    ans[1]=j;
                    ans[2] = i;
                    ans[3]=j;
                    bfs(i,j,vis,land,ans);
                    res.push_back(ans);
                }
            }
        }

        return res;
    }

    void bfs(int i, int j, vector<vector<int>> &vis, vector<vector<int>> &land, vector<int> &ans)
    {
        vis[i][j] = 1;

        queue<pair<int, int>> q;
        q.push({i,j});
        int dx[4] = {-1,0,1,0};
        int dy[4] = {0,1,0,-1};

        while(!q.empty())
        {
            pair<int,int> val = q.front();
            q.pop();
        for(int idx=0;idx<4;idx++)
        {
                int ni = val.first + dx[idx];
                int nj = val.second + dy[idx];
                if (ni >= 0 && ni < land.size() && nj >= 0 && nj < land[0].size() && land[ni][nj] == 1 && vis[ni][nj] == 0) {
                    q.push({ni, nj});
                    vis[ni][nj] = 1;
                    ans[2] = max(ans[2], ni);
                    ans[3] = max(ans[3],nj);

                }
            }


        }
        }
};