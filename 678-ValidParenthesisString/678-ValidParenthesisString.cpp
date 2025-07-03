// Last updated: 7/2/2025, 11:52:17 PM
class Solution {
public:
    bool checkValidString(string s) {
        int leftMin = 0, leftMax = 0;

        for(char i : s){
            if(i == '('){
                leftMin ++;
                leftMax++;
            }
            else if(i == ')')
            {
                leftMin--;
                leftMax--;
            }
            else
            {
                leftMin--;
                leftMax++;
            }
            if(leftMax < 0) return false;
            if(leftMin < 0) leftMin = 0;

        }
        return leftMin == 0;
    }
};