// Last updated: 7/2/2025, 11:50:35 PM
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++){
                 if( nums[i] == nums[j])
                 {
                     c++;
                 }
            }
          
        }
        return c;
    }
};