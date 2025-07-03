// Last updated: 7/2/2025, 11:49:01 PM
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        vector<int> bits(64);
        int bit_flips = 0;

        for(int i=0;i<32;i++){
            for(auto num : nums){
                if(num>>i&1) bits[i]++;
            }
        }

        for(int i=0;i<32;i++){
            if ((bits[i] % 2) != ((k >> i) & 1)) {
                bit_flips++;
            } 
        }
        return bit_flips;
    }
};