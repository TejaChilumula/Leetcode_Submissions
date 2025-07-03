// Last updated: 7/2/2025, 11:52:31 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size(), c = 0, maxi = 0,start=0;
        for(int end = 0;end<n;end++)
        {
            if(nums[end] == 0 ) c++;

            while(c>0)
            {
                if(nums[start] == 0) c--;
                start++;
            }

            maxi = max(maxi, end-start+1);
        }

        return maxi;
    }
};