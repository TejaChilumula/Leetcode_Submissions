// Last updated: 7/2/2025, 11:50:38 PM
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1;i<nums.size();i++)
            nums[i]=nums[i]+nums[i-1];
        return nums;
    }
};