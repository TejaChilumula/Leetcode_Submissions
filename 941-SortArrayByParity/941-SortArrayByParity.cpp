// Last updated: 7/2/2025, 11:51:41 PM
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        vector<int>ans;
        vector<int>odd;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2 == 0)
            {
                ans.push_back(nums[i]);
            }
            else odd.push_back(nums[i]);
        }
        ans.insert(ans.end() , odd.begin() , odd.end());
    return ans;
    }
    
};