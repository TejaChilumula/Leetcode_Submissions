// Last updated: 7/2/2025, 11:49:29 PM
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi = nums[0];
        for(auto num : nums) maxi = max(maxi, num);
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            int lcl_count = 0;
            if(nums[i] == maxi){
                while(i<nums.size()-1 && nums[i] == nums[i+1]){
                    lcl_count++;
                    i++;
                }
            }
            ans = max(lcl_count+1, ans);
        }
        return ans;
    }
};