// Last updated: 7/2/2025, 11:52:21 PM
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int sum = 0, ans=0;
        map<int, int> mp;

        for(auto it : nums)
        {
            sum += it;

            if(sum == k ) ans++;

            if(mp.find(sum-k) != mp.end())
            {
                ans += mp[sum - k];

            }

            mp[sum]++;
        }

        return ans;
    }
};