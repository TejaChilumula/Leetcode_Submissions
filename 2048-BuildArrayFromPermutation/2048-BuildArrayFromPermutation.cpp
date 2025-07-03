// Last updated: 7/2/2025, 11:49:59 PM
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
            ans.push_back(nums[nums[i]]);
        return ans;
    }
};