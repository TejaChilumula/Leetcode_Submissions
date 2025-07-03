// Last updated: 7/2/2025, 11:50:36 PM
class Solution {
public:
    int minDifference(vector<int>& nums) {
        if(nums.size() <= 4) return 0;
        if(nums.size() == 5) return 1; 
        sort(nums.begin(), nums.end());

        int n = nums.size()-1;
        return min({nums[n-3] - nums[0], nums[n] - nums[3], nums[n-2] - nums[1], nums[n-1]-nums[2]});


    }
};