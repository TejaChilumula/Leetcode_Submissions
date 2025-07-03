// Last updated: 7/2/2025, 11:53:28 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        sort(nums.begin(), nums.end());

        for(int i=1;i<nums.size();i++){
            int c = 0;
            while(i<nums.size() && nums[i-1] == nums[i]) {
                c++;
                i++;}
            
            if(c >= nums.size()/2) return nums[i-1];

            
        }
        return 0;
    }
};