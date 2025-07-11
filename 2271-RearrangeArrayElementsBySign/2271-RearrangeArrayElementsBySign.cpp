// Last updated: 7/2/2025, 11:49:39 PM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int p_idx = 0;
        bool flas = true;
        vector<int> pos, neg;
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            if(nums[i] > 0) pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }

        for(int i=0;i<pos.size();i++){
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }
    
        return ans;
    }
};