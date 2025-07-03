// Last updated: 7/2/2025, 11:55:43 PM
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        string inpt = to_string(x);

        for(int i=0;i<inpt.size()/2;i++){
            if(inpt[i] != inpt[inpt.size()-i-1]) return false;
        }

        return true;
    }
};