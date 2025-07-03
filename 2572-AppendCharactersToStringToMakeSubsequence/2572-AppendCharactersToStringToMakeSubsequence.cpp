// Last updated: 7/2/2025, 11:49:24 PM
class Solution {
public:
    int appendCharacters(string s, string t) {
        int i1 = 0, i2 = 0;

        while(i1 < s.size() && i2 < t.size())
        {
            if(s[i1] == t[i2])
            {i1++;
            i2++;}
            else i1++;
        }

        return t.size() - i2;
    }
};