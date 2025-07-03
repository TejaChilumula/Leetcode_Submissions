// Last updated: 7/2/2025, 11:49:06 PM
class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        int total_sum =0;
        for(int i=0;i<32;i++){
            int bit_count = 0;
            for(int num : nums){
                if((num>>i) & 1) bit_count++;
            }
            if(bit_count >= k) total_sum += 1<<i;
        }
        return total_sum;
    }
};