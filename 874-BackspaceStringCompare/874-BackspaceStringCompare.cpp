// Last updated: 7/2/2025, 11:51:52 PM
class Solution {
public:
    bool backspaceCompare(string s, string t) {


        string ss = help(s);
        string tt = help(t);

        return ss == tt;
    }

    string help(string s)
    {
        string ans;

        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '#')
            {
                if(!ans.empty())
                ans.pop_back();
            }
            else ans.push_back(s[i]);


        }

        return ans;
    }
};