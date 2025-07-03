// Last updated: 7/2/2025, 11:51:30 PM
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
      vector<vector<int>> ans;
      
      priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>, greater<pair<int, vector<int>>>> pq;

      for(auto i : points)
      {
        int sqrt = i[0] * i[0] + i[1] * i[1];
        pq.push({sqrt, i});
      }

      while(k > 0)
      {
        ans.push_back(pq.top().second);
        pq.pop();
        k--;
      }

      return ans;
        
    }
};