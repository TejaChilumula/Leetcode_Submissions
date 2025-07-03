// Last updated: 7/2/2025, 11:52:19 PM
class Solution {
public:
    bool validPalindrome(string s) {
      int n = s.size()-1;
        return help(s, 0, n,0);

    }
    bool help(string s, int l, int r,int c)
    {
      if(c > 1) return false;
      while(l <= r){
        if(s[l] == s[r]){
        l++;
        r--;
      }
      else{
      return help(s,l+1,r,c+1) || help(s, l,r-1,c+1);
      }
      }
      return true;

    }
};