// Last updated: 7/2/2025, 11:55:32 PM
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;

         help(ans, n,"",0);

         return ans;
    }

    void help(vector<string> &ans, int open, string str, int close)
    {
        if(open == 0 && close == 0)
        {
            ans.push_back(str);
            return;
        }

        if(close > 0) help(ans, open , str+")",close-1);
        if(open > 0)  help(ans, open-1, str+"(",close+1);       
    }
};