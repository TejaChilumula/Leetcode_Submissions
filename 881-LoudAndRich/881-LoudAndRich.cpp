// Last updated: 7/2/2025, 11:51:50 PM
class Solution {
public:
    vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
    int n = quiet.size();
        vector<vector<int>> adj(n);
        vector<int> ans(n), indegree(n, 0);

        for (int i = 0; i < n; i++) ans[i] = i;

        for (auto& edge : richer) {
            adj[edge[0]].push_back(edge[1]); // edge[0] is richer than edge[1]
            indegree[edge[1]]++;
        }

        queue<int> q;
        for (int i = 0; i < n; i++) {
            if (indegree[i] == 0) q.push(i);
        }

        while (!q.empty()) {
            int u = q.front(); q.pop();
            for (int v : adj[u]) {
                if (quiet[ans[v]] > quiet[ans[u]]) {
                    ans[v] = ans[u];
                }
                if (--indegree[v] == 0) {
                    q.push(v);
                }
            }
        }

        return ans;
    }
};