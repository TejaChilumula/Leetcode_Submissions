// Last updated: 7/12/2025, 6:29:32 PM
class Solution {
public:
    vector<int> processQueries(int c, vector<vector<int>>& connections, vector<vector<int>>& queries) {
        vector<vector<int>> adj(c+1);
        vector<int> vis(c+1,0);
        vector<int> ans;

        for(int i=0;i<connections.size();i++){
            int u = connections[i][0];
            int v = connections[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<set<int>> groups;
        unordered_map<int, pair<int, int>> stations;

        // DFS
        int k = 0;
        for(int i=1;i<=c;i++){
            if(vis[i] == 0){
                k++;
                dfs(i,adj, groups, stations,k, vis);
            }
        }


        for(int i=0;i<queries.size();i++){
            int q_type = queries[i][0];
            int station = queries[i][1];
            int c_group = stations[station].first;
            int online = stations[station].second;

            // if type - 1
            if(q_type == 1){
                
                if(online==1) ans.push_back(station);
                else if(groups[c_group].empty()) ans.push_back(-1);
                else{
                    ans.push_back(*groups[c_group].begin());
                }
            }

            else{
                groups[c_group].erase(station);
                stations[station].second = 0;   
            }
        }
        
        return ans;
    }

    void dfs(int v, vector<vector<int>> &adj,
             vector<set<int>>& groups, 
             unordered_map<int, pair<int, int>>& stations, int k,
            vector<int> &vis){
        if (k >= groups.size()) groups.resize(k + 1);
        vis[v] = 1;
        groups[k].insert(v);
        stations[v] = {k,1};

        for(auto adj_v : adj[v]){
            if(!vis[adj_v]){
                dfs(adj_v,adj,groups,stations,k,vis);
            }
        }
        
    }
};