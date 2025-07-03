// Last updated: 7/2/2025, 11:55:06 PM
class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        for(int i = s.size()-1;i>= 0;i--){
            while(i>=0 && s[i] == ' ' && len == 0) i--;
            while(i>=0 && s[i--] != ' ') len++;
            break;
        }
        return len;
    }
};