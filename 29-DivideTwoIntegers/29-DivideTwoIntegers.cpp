// Last updated: 7/2/2025, 11:55:24 PM
class Solution {
public:
    int divide(int dividend, int divisor) {
        long q = (long)dividend/divisor;
        if(q > pow(2,31)-1) return pow(2,31)-1;
        else if(q<-pow(2,31)) return -pow(2,31);
        return q;
    }
};