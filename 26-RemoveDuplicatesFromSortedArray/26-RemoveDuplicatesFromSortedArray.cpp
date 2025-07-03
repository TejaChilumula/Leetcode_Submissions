// Last updated: 7/2/2025, 11:55:28 PM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       
        int idx = -1;
        for(int i=0;i<nums.size();i++){
            while(i > 0 && i < nums.size() && nums[i] == nums[i-1]) i++;
            if(i < nums.size()) nums[++idx] = nums[i];
        }

        return idx+1;
            
    }
};