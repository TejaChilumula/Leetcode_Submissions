// Last updated: 7/2/2025, 11:53:21 PM
class Solution {
public:
    int rangeBitwiseAnd(int l, int r) {
        /*int ans = left;

        for(int i=left+1;i<=right;i++){
            ans &= i;
        }
        return ans;
        */

        /* Use the power of AND */
        /* as we are increasing from left to right - the numbers will share atleast one bit common prefix, we keep that bit and rest all we will make 0,
        if a bit is 0 at left ni, then it will defenitely 0 in right
        */
        int shifts = 0;
        while(l < r){
            l = l>>1;
            r = r>>1;
            shifts++;
        }

        return l<<shifts;

    }
};