// Last updated: 7/2/2025, 11:55:16 PM
class Solution {
public:
    string countAndSay(int n) {
        if(n == 1) return "1";

        return help("", n);
    }

    string help(string s, int n){
        if(n==1) return "1";

        string ss = help(s,n-1);
        string new_s = "";
        int c = 1;

        for(int i=1; i< ss.size();i++){
            while(ss[i] == ss[i-1]){
                c++;
                i++;
            }
            new_s += to_string(c) + ss[i-1];
            c=1;
        }
        int len = ss.size();
        if(ss.size() <= 1 || ss[len-1] != ss[len-2]) new_s += to_string(c) + ss.back();

    return new_s;
    }
};