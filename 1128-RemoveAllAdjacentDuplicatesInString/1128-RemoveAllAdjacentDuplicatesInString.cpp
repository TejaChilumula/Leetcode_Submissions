// Last updated: 7/2/2025, 11:51:20 PM
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stk;
        string ans = "";

        for(int i=0;i<s.size();i++)
        {
            if(stk.empty() || stk.top() != s[i]) stk.push(s[i]);
            else stk.pop();
        }

        while(!stk.empty())
        {
          ans = stk.top() + ans; 
          stk.pop();
        }

        return ans;
    }
};