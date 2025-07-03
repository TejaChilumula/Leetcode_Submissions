// Last updated: 7/2/2025, 11:49:03 PM
class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
       sort(nums.begin(), nums.end());
       int n = nums.size(), idx = 0;
        vector<vector<int>> ans(n/3);
       for(int i=0;i<nums.size();i+=3){
            if((nums[i+1] - nums[i]) > k || (nums[i+2] - nums[i+1]) > k || (nums[i+2] - nums[i]) > k) return {};
                ans[idx].push_back(nums[i]);
                ans[idx].push_back(nums[i+1]);
                ans[idx].push_back(nums[i+2]);
                idx++;
       } 
       return ans;
    }
};