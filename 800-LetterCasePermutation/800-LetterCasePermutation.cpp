// Last updated: 7/2/2025, 11:51:59 PM
class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;

        help(s, ans, 0);
        return ans;
    }

    void help(string &s, vector<string> &ans, int len)
    {
        if(len == s.size())
        {
            ans.push_back(s);
            return;
        }

        char c = s[len];

        if(isalpha(c))
        {
            s[len] = islower(c) ? toupper(c) : tolower(c);
            help(s,ans,len+1);
            s[len] = c;
        }

        help(s,ans,len+1);
    }
};