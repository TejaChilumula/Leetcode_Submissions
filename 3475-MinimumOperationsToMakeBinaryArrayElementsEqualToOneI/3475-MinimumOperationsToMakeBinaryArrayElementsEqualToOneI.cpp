// Last updated: 7/2/2025, 11:48:55 PM
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int flips = 0;
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i] == 0){
                for(int j=0 ;j<3;j++)
                    nums[i+j] ^= 1;
                flips++;
            }
        }
        for(int i=0;i<nums.size();i++) if(nums[i] != 1) return -1;
        return flips;
    }
};