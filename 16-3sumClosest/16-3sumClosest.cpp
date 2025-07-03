// Last updated: 7/2/2025, 11:55:37 PM
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum = nums[0]+nums[1]+nums[2];
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size()-2;i++){
            int lcl_sum = nums[i];
            int l = i+1;
            int r = nums.size()-1;
            while(l<r){
                int total = lcl_sum + nums[l] + nums[r];
                if(abs(target - total) < abs(target - sum)) sum = total;
                if(total == target) return total;
                if(total > target)
                    r--;
                else
                    l++;
            }
        }
        return sum;
    }
};