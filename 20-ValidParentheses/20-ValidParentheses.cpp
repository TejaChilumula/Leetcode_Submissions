// Last updated: 7/2/2025, 11:55:34 PM
class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        for(int i=0;i<s.size();i++){
            if(!stk.empty() && s[i] == '}' && stk.top() == '{') {
                stk.pop();
                continue;}
            if(!stk.empty() && s[i] == ']' && stk.top() == '['){
                 stk.pop();
                 continue;}
            if(!stk.empty() && s[i] == ')' && stk.top() == '(') {
                stk.pop();
                continue;}

            stk.push(s[i]);
        }

        if(stk.empty()) return true;

        return false;
    }
};