// Last updated: 7/2/2025, 11:53:24 PM
class Solution {
public:
    int rob(vector<int>& nums) {
        //vector<int> dp(n, 0);
        if(nums.size() == 1) return nums[0];
        int prev2 = nums[0];
        int prev1 = max(nums[0], nums[1]); // max possible for this idx

        for(int i=2;i<nums.size();i++)
        {
            int cur = max(prev2 + nums[i], prev1);
            prev2 = prev1;
            prev1 = cur;
        }
        return prev1;
    }
};