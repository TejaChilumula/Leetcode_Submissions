// Last updated: 7/2/2025, 11:55:10 PM
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        //help(nums, s, lcl, ans);
        flipping_method(nums, 0, ans);
        return ans;
    }
    void flipping_method(vector<int> &nums, int start, vector<vector<int>> &ans){
        if(start == nums.size()){
            ans.push_back(nums);
            return;
        }

        unordered_set<int> seen;

        for(int i=start;i<nums.size();i++){
            
            if(seen.count(nums[i])) continue;

            seen.insert(nums[i]);
            
            swap(nums[i], nums[start]);
            flipping_method(nums, start+1, ans); // Here not i+1 *** IMP, start + 1
            swap(nums[i], nums[start]);
        }
    }
};