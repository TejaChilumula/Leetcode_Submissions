// Last updated: 7/2/2025, 11:53:15 PM
class Solution {
public:
    bool canFinish(int no, vector<vector<int>>& prerequisites) {

      vector<vector<int>> adj(no);

       
        vector<int> indegree(no, 0);

        for(vector<int> e : prerequisites)
        {
          adj[e[0]].push_back(e[1]);
          indegree[e[1]]++;
        }

        queue<int> q;

        for(int i=0; i<no;i++)
        {
          if(indegree[i] == 0) q.push(i);
        }

        vector<int> ans;

        while(!q.empty())
        {
          int v = q.front();
          ans.push_back(v);
          q.pop();

          for(int adj_v : adj[v])
          {
            indegree[adj_v]--;
            if(indegree[adj_v] == 0) q.push(adj_v);
          }
        }

        if (ans.size() == no) return true;

        return false;
    }
};