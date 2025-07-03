// Last updated: 7/2/2025, 11:49:08 PM
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int c =0 ;
        for(int i=0;i<s.size();i++){
            if(s[i] == '1') c++;
        }

        c-=1;
        int idx=0;
        while(c-->0) s[idx++] = '1';

        while(idx<s.size()-1) s[idx++] = '0';

        s[s.size()-1] = '1';
        return s;
    }
};