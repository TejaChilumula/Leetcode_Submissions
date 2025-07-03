// Last updated: 7/2/2025, 11:52:56 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //sort(nums.begin(), nums.end());

        /* problem comes with 0 , either -ve or +ve
        for(int i=0;i<nums.size();i++){
            int idx_num = abs(nums[i]);
            if(idx_num < nums.size())nums[idx_num] = -nums[idx_num]; 
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i] > 0) return i;
        }
        return nums.size();*/

        // optimal sum and subtract from A.P of n no's
        int n = nums.size();
        int AP = n*(n+1)/2;
        int sum = 0;

        for(int i=0;i<nums.size();i++){
            sum += nums[i];
        }

        return AP - sum;
    }
};