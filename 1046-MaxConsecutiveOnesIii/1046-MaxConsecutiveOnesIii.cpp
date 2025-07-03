// Last updated: 7/2/2025, 11:51:26 PM
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int start = 0, end =0, maxOnes = 0,counter = 0;

        while(end < nums.size())
        {
            if(nums[end] == 0) counter++;

            while(counter > k)
            {
                if(nums[start] == 0) counter--;
                start++;

            }

            maxOnes = max(maxOnes , end - start +1);
            end++;
        }

        return maxOnes;
    }
};