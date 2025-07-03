// Last updated: 7/2/2025, 11:50:11 PM
class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
      int n = heights.size();
      
        int maxSoFar = n-1;
        vector<int> ans;
        ans.push_back(maxSoFar);
        if(n == 1) return ans;

        for(int i = n-2;i>=0;i--)
        {
          if(heights[i] > heights[maxSoFar]) 
          {
            ans.push_back(i);
            maxSoFar = i;
          }
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};