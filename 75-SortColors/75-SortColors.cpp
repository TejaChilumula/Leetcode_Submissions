// Last updated: 7/2/2025, 11:54:22 PM
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0 , j = nums.size()-1, m=0;

        while(m<=j)
        {
          if(nums[m] == 0)
          {
            nums[m] = nums[i];
            nums[i] = 0;
            i++;
          }
          if(nums[m] == 2)
          {
            nums[m] = nums[j];
            nums[j] = 2;
            j--;
          }
          else m++;
        }
    }
};