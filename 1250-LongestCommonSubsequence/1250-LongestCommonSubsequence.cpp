// Last updated: 7/2/2025, 11:51:10 PM
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int len1= text1.size();
        int len2 = text2.size();

        int maxx = max(len1 , len2);

        vector<vector<int>> dp(maxx,vector<int>(maxx,-1));

        //return help(text1 , text2 , len1, len2, 0, 0, dp);
        return SOhelp(text1, text2);
    }
    // Memoization
    int help(string t1 , string t2, int l1, int l2, int i, int j, vector<vector<int>> dp)
    {
        if(i == l1 || j == l2) return 0;

        if(dp[i][j] != -1) return dp[i][j];
        int pick = INT_MIN;
        if(t1[i] == t2[j])  pick = 1 + help(t1, t2, l1, l2, i+1, j+1,dp);
        int notpick = max(help(t1,t2,l1,l2,i,j+1,dp), help(t1,t2,l1,l2,i+1,j,dp));

        return dp[i][j] = max(pick,notpick);
    }
    //Tabulation

    int Tabhelp(string t1 , string t2)
     {
         int l1 = t1.size();
         int l2 = t2.size();

        vector<vector<int>> dpp(l1+1 , vector<int>(l2+1,0));

        for(int  i=1;i<=l1;i++)
        {
            for(int j=1;j<=l2;j++)
            {
                if(t1[i-1] == t2[j-1]) dpp[i][j] = 1+dpp[i-1][j-1];
                else
                dpp[i][j] = max(dpp[i-1][j] , dpp[i][j-1]);
            }
        }
        return dpp[l1][l2];
     } 

     // Space optimization

     int SOhelp(string t1 , string t2)
     {
         int l1 = t1.size();
         int l2 = t2.size();

        vector<int> prev(l2+1,0);

        for(int  i=1;i<=l1;i++)
        {
            vector<int> cur(l2+1,0);
            for(int j=1;j<=l2;j++)
            {
                if(t1[i-1] == t2[j-1]) cur[j] = 1+prev[j-1];
                else
                cur[j] = max(cur[j-1] , prev[j]);
            }
            prev = cur;
        }
        return prev[l2];
     }
};