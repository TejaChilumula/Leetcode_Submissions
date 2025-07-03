// Last updated: 7/2/2025, 11:48:54 PM
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ops = 0;

        for(int i=0;i<nums.size();i++){
            int rem = nums[i]%3;

            ops += min(rem, 3-rem);
        }

        return ops;
    }
};