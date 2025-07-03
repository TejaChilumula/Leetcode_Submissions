// Last updated: 7/2/2025, 11:49:22 PM
class Solution {
public:
    bool isCircularSentence(string sentence) {
        int n = sentence.size()-1;
        for(int i = 0;i<=n;i++)
        {
            if(i == n && sentence[i] != sentence[0] || sentence[i] == ' ' && sentence[i-1] != sentence[i+1]) return false;

        }

        return true;
    }
};