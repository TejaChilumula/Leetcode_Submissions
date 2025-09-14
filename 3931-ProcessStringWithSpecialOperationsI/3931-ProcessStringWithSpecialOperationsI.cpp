// Last updated: 9/13/2025, 8:02:30 PM
class Solution {
public:
    string processStr(string s) {
        string res = "";
        for(int i=0;i<s.size();i++){
            if(s[i] == '%') reverseS(res);
            else if(s[i] == '#') duplicate(res);
            else if(s[i] == '*') removeLast(res);
            else res+=s[i];

            cout<<res<<endl;
        }

        return res;
    }
    void removeLast(string &s){
        if(s.size() > 0)
            s.resize(s.size()-1);
    }
    void duplicate(string &s){
        s = s+s;
    }
    void reverseS(string &s){
        reverse(s.begin(), s.end());
    }
};