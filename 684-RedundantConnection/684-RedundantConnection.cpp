// Last updated: 7/2/2025, 11:52:15 PM
class DSU{
    vector<int> parent, size;
    int sze;
    
    public:
    DSU(int n): parent(n), size(n){
        size.assign(n,1);
        
        for(int i=0;i<n;i++)
            parent[i] = i;
    }

    int findParent(int v)
    {
        if(parent[v] == v) return v;

        return parent[v] = findParent(parent[v]);
    }

    bool Union(int u, int v)
    {
        int up = findParent(u);
        int vp = findParent(v);

        if(up == vp) return true; // both are of the same component

        if(size[up] > size[vp])
        {
            parent[vp] = up;
            size[up] += size[vp];
        }
        else{
            parent[up] = vp;
            size[vp] += size[up];
        }

        return false;
    }
};
class Solution {
public:

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        // prims algo // need to find the min spanning tree
        // you need to reach all the vertices in N-1 edges, if at all it already reached then that is the edge we are looking for

        // Union Find helps here - helps to find the cycle in an undirected graphs
        int n = edges.size();
        DSU ds(n+1);

        for(auto it : edges)
        {
            int u = it[0];
            int v = it[1];

            if(ds.findParent(u) == ds.findParent(v)) return {u,v};

            ds.Union(u,v);
        }

return {};
    }
};