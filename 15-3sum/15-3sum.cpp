// Last updated: 7/2/2025, 11:55:42 PM
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin() , nums.end());
        int len = nums.size(); 

        for(int i=0;i<len-2;i++)
        {
              if( i>0 && nums[i] == nums[i-1]) continue;

              int l = i+1 , r = len-1;
            while(l < r)
            {
                int sum = nums[i] + nums[l] + nums[r];

                if(sum < 0) l++;
                else if(sum > 0) r--;
                else {
                    vector<int> triplet = {nums[i], nums[l], nums[r]};
                    ans.push_back(triplet);

                    while(l+1 < r && nums[l] == nums[l+1]) l++;
                    while(l < r-1 && nums[r] == nums[r-1]) r--;
                    l++;
                    r--;
                }

            }
        }

        return ans;
    }
};