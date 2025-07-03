// Last updated: 7/2/2025, 11:55:44 PM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() <= 1) return s.size();
        map<char,int> mp;
        int start = 0, cnt = 0;
        for(int end =0 ;end<s.size();end++){
            mp[s[end]]++;

            while(start < end && mp[s[end]] > 1){
                mp[s[start++]]--;
                
            }
            cnt = max(cnt, end - start + 1);
        }

        return cnt;
    }
};