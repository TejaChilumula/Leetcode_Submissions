// Last updated: 7/2/2025, 11:50:53 PM
class Solution {
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        vector<int> indegree(n, 0);
        vector<set<int>> ancestors(n);

        for (auto& edge : edges) {
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
                    ancestors[v].insert(ancestors[u].begin(), ancestors[u].end());
                    ancestors[v].insert(u);
                if (--indegree[v] == 0) {
                    q.push(v);
                }
            }
        }
    
    // In case of Vector ans ---- 
    /*& is very very imp, or else you are just removing in the copy, but not on the actual values
    for(auto& vec : ans) {
        sort(vec.begin(), vec.end());
        vec.erase(unique(vec.begin(), vec.end()), vec.end());}
        // this is really imp, 
            /*
                - unique will move all duplicate to end and return pointer to end of uniqu elements
                 { 1,2,3,4,5,5,5}
                         ptr at 4  
                - erase() , will erase all the duplicates at the end         
                         */
    vector<vector<int>> ans(n);
    for (int i = 0; i < n; i++) {
            ans[i] = vector<int>(ancestors[i].begin(), ancestors[i].end());
        }


    return ans;
    }
};