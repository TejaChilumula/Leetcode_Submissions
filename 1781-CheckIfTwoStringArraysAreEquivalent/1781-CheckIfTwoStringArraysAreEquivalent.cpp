// Last updated: 7/2/2025, 11:50:30 PM
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1 = "";
        string s2 = "";
        for(string s : word1)
        {
            s1 += s;
        }
        for(string s : word2)
        {
            s2 += s;
        }

        return s1 == s2;
    }
};