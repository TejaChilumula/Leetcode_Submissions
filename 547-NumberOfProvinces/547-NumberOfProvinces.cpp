// Last updated: 7/2/2025, 11:52:22 PM
class Solution {
public:
    void dfs (int i,vector<vector<int>>& adj, vector<bool>& vis)
    {
        for(int j=0; j<adj.size();j++)
        {
            if(adj[i][j] == 1 && vis[j] == false)
            {
                vis[i] = true;
                dfs(j,adj,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> vis(n,false);
        int count = 0;
        for(int i=0;i<n;i++)
        {
            if(vis[i] != true)
            {
                vis[i] = true;
                dfs(i,isConnected,vis);
                count++;
            }
        }
        return count;
    }
};