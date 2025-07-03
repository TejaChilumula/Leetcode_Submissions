// Last updated: 7/2/2025, 11:55:40 PM
class Solution {
public:
    int romanToInt(string s) {
        map<char, int> mp;
        mp['M'] = 1000;
        mp['D'] = 500;
        mp['C'] = 100;
        mp['L'] = 50;
        mp['X'] = 10;
        mp['V'] = 5;
        mp['I'] = 1;

        int i = 0, ans = 0, n = s.size();

        while(i < s.size()){
            if(i < n && mp[s[i]] < mp[s[i+1]] ){
                ans += mp[s[i+1]] - mp[s[i]];
                i+=2;
            } 
            else{
                ans += mp[s[i++]];
            }

        }
        return ans;
    }
};