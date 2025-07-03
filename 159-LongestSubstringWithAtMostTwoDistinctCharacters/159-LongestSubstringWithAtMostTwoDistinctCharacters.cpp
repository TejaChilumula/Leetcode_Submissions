// Last updated: 7/2/2025, 11:53:32 PM
class Solution {
public:
    int lengthOfLongestSubstringTwoDistinct(string str) {
      vector<char> mp(256,0);
      int s = 0, ans = 0, c=0;

      for(int e = 0; e < str.size();e++)
      {
        if(mp[str[e]] == 0) c++;
        mp[str[e]]++;

        while(c > 2)
        {
          if(--mp[str[s]] == 0) c--;
          s++;
        }

        ans = max(ans, e - s + 1); // 0 based indexing
    
      }

      return ans;
        
    }
};