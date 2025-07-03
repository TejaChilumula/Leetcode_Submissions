// Last updated: 7/2/2025, 11:53:14 PM
class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
                vector<int> adj[numCourses];

        for(int i=0;i<prerequisites.size();i++)
        {
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }

        vector<int> indegree(numCourses,0);
        vector<int> topo;
        queue<int> q;

        for(int i=0;i<numCourses;i++)
        {
            for(int j : adj[i])
            {
                indegree[j]++;
            }
        }

        for(int i=0;i<indegree.size();i++)
        {
            if(indegree[i] == 0) q.push(i);
        }

        while(!q.empty())
        {
            int top = q.front();
            q.pop();

            topo.push_back(top);

            for(int j : adj[top])
            {
                indegree[j]--;
                if(indegree[j] == 0) q.push(j);
            }
        }

      if(topo.size() == numCourses) return topo;
      return {};
    }
};