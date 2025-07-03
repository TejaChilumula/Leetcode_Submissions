// Last updated: 7/2/2025, 11:48:59 PM
class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;
        for(int i=0;i<s.size()-1;i++){
            sum += abs(s[i] - s[i+1]);
        }
        return sum;
    }
};