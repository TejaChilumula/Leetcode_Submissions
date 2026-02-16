// Last updated: 2/16/2026, 12:02:33 AM
1class Solution {
2public:
3    vector<int> dp;
4    int rec(int n)
5    {
6        if(n == 1) return 0;
7
8        if(dp[n] != -1) return dp[n];
9        for(int i=1;i<n;i++)
10        {
11            if(n%i==0)
12                if(rec(n-i) == 0) return 1;
13        }
14        dp[n] = 0;
15        return dp[n];
16    }
17    bool divisorGame(int n) {
18        // can choose an integer from 1 to n-1
19        // If n == 1 means you didnt have a chance to choose so you loose
20        // even if once lost then lost
21        dp.resize(n+1,-1);
22        return rec(n);
23    }
24};