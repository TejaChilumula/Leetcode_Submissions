// Last updated: 7/2/2025, 11:50:47 PM
class Solution {
public:
    int minSteps(string s, string t) {
        if(s == t) return 0;

        map<char, int> mp;

        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int ans = 0;

        for(int i=0;i<t.size();i++){
            if(mp[t[i]] > 0) mp[t[i]]--;
            else ans++;
        }

        return ans;
    }
};