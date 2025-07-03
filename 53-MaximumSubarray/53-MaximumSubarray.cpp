// Last updated: 7/2/2025, 11:55:12 PM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxatend = INT_MIN;
        int maxtillnow = 0;

        for(int i=0;i<nums.size();i++)
        {
            maxtillnow += nums[i];

            maxatend = max(maxtillnow , maxatend);
            if(maxtillnow < 0) maxtillnow = 0;
        }

        return maxatend;
    }
};