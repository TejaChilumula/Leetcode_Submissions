// Last updated: 7/2/2025, 11:54:32 PM
class Solution {
public:
    int uniquePaths(int m, int n) {

      vector<vector<int>> dp(m+1, vector<int>(n+1, -1));
      vector<int> prev(n+1,1);
      vector<int> cur(n+1, 0);

      cur[0] = 1;

    
      for(int i=0;i<n;i++)
       dp[0][i] = 1;

      for(int i=1;i<m;i++)
      {
        for(int j=1;j<n;j++)
        {
          //dp[i][j] = dp[i-1][j] + dp[i][j-1];
          cur[j] = prev[j] + cur[j-1];
          
        }
        prev = cur;
      }
        return prev[n-1];
    }
};