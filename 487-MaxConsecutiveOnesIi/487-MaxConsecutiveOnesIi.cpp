// Last updated: 7/2/2025, 11:52:30 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int s = 0, ans = 0, c = 0;

        for(int e = 0 ; e < nums.size();e++)
        {
          if(nums[e] == 0) c++;

          while(c > 1)
          {
            if(nums[s++] == 0) c--;
          }

          ans = max(ans, e - s + 1);
        }

        return ans;
    }
};