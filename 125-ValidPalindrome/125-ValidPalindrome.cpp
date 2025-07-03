// Last updated: 7/2/2025, 11:53:57 PM
class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size()-1;

        while(l <= r)
        {
          if(tolower(s[l]) == tolower(s[r]))
          {
            l++;
            r--;
          }

          else if(!isalpha(s[l])&&!isdigit(s[l]) || s[l] == ' ')
            l++;
          else if(!isalpha(s[r])&& !isdigit(s[r]) || s[r] == ' ')
            r--;
          else
          return false;

        }

        return true;
    }
};