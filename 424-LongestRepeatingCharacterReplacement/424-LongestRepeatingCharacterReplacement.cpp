// Last updated: 7/2/2025, 11:52:37 PM
class Solution {
public:
    int characterReplacement(string s, int k) {
        
        vector<int> charCount(26,0);

        int maxCount = 0, maxLen = 0, left = 0;

        for(int right = 0; right<s.length();right++)
        {
            maxCount = max(maxCount, ++charCount[s[right] - 'A']);

            if(right-left+1- maxCount > k)
            {
                --charCount[s[left]-'A'];
                left++;
            }

            maxLen = max(maxLen, right-left+1);
        }

    return maxLen;
    }
};