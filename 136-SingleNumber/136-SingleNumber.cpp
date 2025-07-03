// Last updated: 7/2/2025, 11:53:46 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sum = 0;
        for(int j=0;j<nums.size();j++){
                    sum = sum ^ nums[j];
            }
            return sum;
    }
};