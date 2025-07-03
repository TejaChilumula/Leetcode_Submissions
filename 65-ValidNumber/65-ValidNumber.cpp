// Last updated: 7/2/2025, 11:54:28 PM
class Solution {
public:
    bool isNumber(string s) {
        bool numseen = false, eseen = false, dotseen = false;
        int j = 0;
        if(s[j] == '+' || s[j] == '-' ) j+=1;

        for(int i=j;i<s.size();i++)
        {
          if(isdigit(s[i])) numseen = true;
          else if(s[i] == '.'){
            if(dotseen || eseen) return false;
            dotseen = true;
          }
          else if(s[i] == 'e' || s[i] == 'E'){
            if(eseen || !numseen) return false;
            eseen = true;
            numseen = false;
          }
          else if(s[i] == '+' || s[i] == '-')
          {
            if(i > 0 && (s[i-1] != 'e' && s[i-1] != 'E')) return false;
          }
          else return false;
          
        }
    return numseen;
    }
};