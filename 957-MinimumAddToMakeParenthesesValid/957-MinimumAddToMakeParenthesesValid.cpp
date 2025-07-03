// Last updated: 7/2/2025, 11:51:40 PM
class Solution {
public:
    int minAddToMakeValid(string s) {
        int open  = 0, close = 0;

        for(int i=0;i<s.size();i++)
        {
          if(s[i] == '(')
            open++;
          else if(s[i] == ')' and open > 0)
            open--;
          else
            close++;
        }

        return open + close;
    }
};