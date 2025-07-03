// Last updated: 7/2/2025, 11:55:11 PM
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        // recursive backtrack way using set, cause elements are distinct

        set<int> s;
        vector<int> lcl;
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

        for(int i=start;i<nums.size();i++){
            swap(nums[i], nums[start]);
            flipping_method(nums, start+1, ans); // Here not i+1 *** IMP, start + 1
            swap(nums[i], nums[start]);
        }
    }

    void help(vector<int> &nums, set<int> s, vector<int> lcl, vector<vector<int>> &ans){
        if(s.size() == nums.size()){
            ans.push_back(lcl);
            return;
        }

        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i]) == s.end()){
                s.insert(nums[i]);
                lcl.push_back(nums[i]);
                help(nums, s, lcl, ans);
                lcl.pop_back();
                s.erase(nums[i]);
            }
        }
    }
};