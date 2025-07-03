// Last updated: 7/2/2025, 11:49:33 PM
class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        // This Approach won't work cause we try to do XOR of all and then 
        // try to make the first bit to 0 to 1, but this might also change the last bits to 0 to 1
        // so this is how it wont work so instead we will do the XOR, which will keep all the bits safe

        // int XOR = 0;

        // for(int i=0;i<nums.size();i++) XOR ^= nums[i];

        // for(int i=0;i<32;i++){
        //     if(!((XOR>>i) & 1) ){
        //         cout<<"passed";
        //         XOR |= (1<<i);
        //         return XOR;
        //     }
        // }
        // return XOR;


        // ****** Approach ********* - Just OR everything, we can keep all the bits

        int OR = 0;

        for(auto num : nums) OR |= num;

        return OR;


    }
};