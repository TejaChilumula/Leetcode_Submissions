// Last updated: 7/2/2025, 11:51:54 PM
class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        // We can do this in 2 ways 
         /*
            - We can perform using DFS sam as finding the path
            for cyclic detection 
            - Using Topo sort , we can come in reverse way from the Terminal nodes and to the nodes that are attached to it in the path, so that these path came from the terminal node
            Its like BFS from the end

              - TOPO from the end 
         */

         // reverse the links
         int v = graph.size();
        vector<int> indegree(v, 0);
        vector<int> adj[v];
         for(int i=0;i<graph.size();i++){
            for(auto adj_v : graph[i]){
                adj[adj_v].push_back(i);
                indegree[i]++;
            }
         }
        queue<int> q;
        for(int i=0;i<v;i++){
            if(indegree[i] == 0) q.push(i);
        }
        
        set<int> s;
        vector<int> safe_v;
        while(!q.empty()){
            auto top = q.front();
            q.pop();
            s.insert(top);
            for(auto adj_v : adj[top]){
                if( --indegree[adj_v] == 0){
                    q.push(adj_v);
                }
            }
        }

        for(auto i : s) safe_v.push_back(i);
        return safe_v;
    }
};