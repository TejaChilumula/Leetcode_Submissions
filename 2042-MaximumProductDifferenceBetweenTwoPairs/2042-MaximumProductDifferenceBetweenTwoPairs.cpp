// Last updated: 7/2/2025, 11:50:00 PM
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size()-1;
        return nums[n]*nums[n-1] - nums[0]*nums[1];
    }
};