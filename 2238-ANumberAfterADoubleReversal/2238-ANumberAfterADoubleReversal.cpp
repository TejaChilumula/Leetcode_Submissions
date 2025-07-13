// Last updated: 7/12/2025, 6:30:08 PM
class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num == 0) return true;
        int rem = num%10;
        return rem == 0 ? false : true;
    }
};