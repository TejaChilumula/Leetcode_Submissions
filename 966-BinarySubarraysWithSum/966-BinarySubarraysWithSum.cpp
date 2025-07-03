// Last updated: 7/2/2025, 11:51:39 PM
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int sum = 0, ans = 0;

        map<int, int> mp({{0,1}});



        for(int i=0;i<nums.size();i++)
        {

            sum += nums[i];


            if( mp.find(sum - goal) != mp.end()) ans += mp[sum - goal];

            mp[sum]++;

            
        }

        return ans;
    }
};