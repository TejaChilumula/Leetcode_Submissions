// Last updated: 7/2/2025, 11:50:04 PM
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(begin(nums),end(nums));
        long start= 0, right = 0, c = 0, d = 0,sum=0;

        while(right<nums.size())
        {
            sum += nums[right];

            if((right-start+1)*nums[right] - sum > k ) sum -= nums[start++];

            d = max(d, right-start+1);
            right++;
        }

        return d;
    }
};