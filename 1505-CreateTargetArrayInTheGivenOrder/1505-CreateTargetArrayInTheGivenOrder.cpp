// Last updated: 7/2/2025, 11:50:44 PM
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>ans;
      
        for(int i=0;i<nums.size();i++)
        {
            ans.insert(ans.begin()+index[i]  , nums[i]);
            //ans.pop_back();
        }
        return ans;
    }
};