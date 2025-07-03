// Last updated: 7/2/2025, 11:49:11 PM
class Solution {
public:
    string removeTrailingZeros(string num) {
        int i = num.size();
       for(i=num.size()-1;i>=0;i--) {
            if(num[i] != '0') break;
       }
       return num.substr(0,i+1);
    }
};