// Last updated: 7/2/2025, 11:52:01 PM
class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n = graph.size();
        vector<int> vis(n,-1);

        for (int i = 0; i < n; ++i) {
            if (vis[i] == -1) {
                if (!bfs(i, graph, vis,0)) {
                    return false;
                }
            }
        }

        return true;
        
    }

    bool bfs(int i, vector<vector<int>> &adj, vector<int> &vis, int color)
    {
        vis[i] = color;

        queue<int> q;
        q.push(i);

        while(!q.empty())
        {
            int top = q.front();
            q.pop();

            for(int j : adj[top])
            {
                if(vis[j] != -1)
                {
                    if(vis[j] == vis[top]) return false;
                }
                else
                {
                    q.push(j);
                    vis[j] = vis[top] == 1 ? 0 : 1;
                }

                }
            }
        
            return true;
    }
    
    
};