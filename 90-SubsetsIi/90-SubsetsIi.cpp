// Last updated: 7/2/2025, 11:54:13 PM
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> lcl;

        sort(nums.begin(), nums.end());

        help(nums, ans, lcl, 0);

        return ans;
    }
      void help(vector<int>& nums, vector<vector<int>> &ans, vector<int>& lcl, int idx){
        if(idx == nums.size()+1) return;
        ans.push_back(lcl);

        for(int i = idx ; i < nums.size(); i++)
        {
            if(i > idx && nums[i] == nums[i-1]) continue;
            lcl.push_back(nums[i]);
            help(nums, ans, lcl ,i+1);
            lcl.pop_back();

        }
      }
};