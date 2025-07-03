// Last updated: 7/2/2025, 11:55:05 PM
class Solution {
public:
    bool canJump(vector<int>& nums) {
        //if(nums[0] == 0) return false;
        vector<bool> dp(nums.size()+1, false);

        dp[0] = true;

        for(int i=0;i<nums.size();i++)
        {
            for(int j = 1 ; j<=nums[i] ; j++)
            {
                if(i+j < nums.size())
                dp[i+j] = dp[i];
            }
        }


        return dp[nums.size()-1];

    }
};