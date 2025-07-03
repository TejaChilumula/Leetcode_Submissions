// Last updated: 7/2/2025, 11:52:57 PM
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        /*
            - Thing is that 2 numbers are diff
            - rem all have the pair
            - so XOR of all nums will be a^b, because all will eliminate i.e c^c, d^d
            - so we need to find the righmost set bit of the XOR which will be the differenciating bit
            - then for each element check the RMSB
        */

        int XOR = 0;
        for(int i=0;i<nums.size();i++){
            XOR ^=nums[i]; // ans will be a ^ b;
        }
        //int negXOR = -XOR > pow(2,32) ? XOR - (2LL << 32) : -XOR;
        unsigned int mask = (unsigned int)XOR & (-(unsigned int)XOR);
        int a= 0, b = 0;
        for(int i : nums){
            if(i & mask)
                a ^= i;
            else b ^= i;
        }
        return {a,b};
    }
};