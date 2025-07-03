// Last updated: 7/2/2025, 11:51:21 PM
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans = 0;
        unordered_map<char, int> mp;
        for(char i : chars)
        {
            mp[i] = mp[i]+1;
        }

        for(string& s : words)
        {
            unordered_map<char,int> wordmp;
            int f = 0;
            for(char i : s)
            {
                wordmp[i]++;
                if(wordmp[i] > mp[i])
                {
                    f = 1;
                    break;
                }
            }
            if(f == 0)
            {
                ans += s.length();
            }
        }
        return ans;
    }
};