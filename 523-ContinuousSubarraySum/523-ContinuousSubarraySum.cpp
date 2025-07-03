// Last updated: 7/2/2025, 11:52:27 PM
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        // Prefix sum
        if(nums.size() < 2) return false;

        int sum =0;

        map<int, int> mp;
        // important because the  prefix sum is direct multiple of k
        mp[0] = 1;


        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];

            if(i>0 and sum%k == 0) return true;

            if(mp.find(sum%k) != mp.end() && i - mp[sum%k] > 1) return true;


            if(mp.find(sum % k) == mp.end())
            mp[sum%k] = i;


        }

        return false;
    }
};