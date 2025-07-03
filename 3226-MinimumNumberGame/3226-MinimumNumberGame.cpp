// Last updated: 7/2/2025, 11:49:04 PM
class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int i=0;
        for(i=1;i<nums.size();i+=2){
            ans.push_back(nums[i]);
            ans.push_back(nums[i-1]);
        }
        if(i == nums.size())
        ans.push_back(nums[i-1]);

        return ans;
    }
};