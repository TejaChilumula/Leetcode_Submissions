// Last updated: 7/2/2025, 11:53:00 PM
class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()) return false;
        unordered_map<char, int> hp;

        for(auto i : s)
        {
            hp[i]++;

        }

        for(auto i : t)
        {
            hp[i]--;
        }

        for(auto x : hp)
        {
            if(x.second != 0 ) return false;
        }

        return true;
    }
};