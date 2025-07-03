// Last updated: 7/2/2025, 11:53:43 PM
class Solution {
public:
    
    bool help(string s, unordered_set<string> &st, int i, vector<int> &dp)
    {
        if(i==s.length()) return true;

        if(dp[i] != -1) return dp[i];

        string temp = "";
        for(int j=i ; j<s.length();j++)
        {
            temp+=s[j];
            if(st.count(temp))
            {
                if(help(s,st,j+1,dp)) return dp[i] = true;
            }        
            
        }

        return dp[i] = false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> st(wordDict.begin(), wordDict.end());

        vector<int> dp(s.length(),-1);
        return help(s,st,0, dp);
    }
};