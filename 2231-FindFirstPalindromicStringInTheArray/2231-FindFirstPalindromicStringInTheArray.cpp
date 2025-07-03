// Last updated: 7/2/2025, 11:49:43 PM
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string s : words)
        {
            if(checkPalindrome(s)) return s;
        }

        return "";
    }

    bool checkPalindrome(string s)
    {
        int i =0 , j= s.length()-1;
        while(i<j)
        {
            if(s[i] != s[j]) return false;
            i++;
            j--;
        }

        return true;
    }
};