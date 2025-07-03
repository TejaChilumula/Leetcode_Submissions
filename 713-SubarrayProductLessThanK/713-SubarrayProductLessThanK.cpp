// Last updated: 7/2/2025, 11:52:14 PM
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        /*
        if(k == 0 || k == 1) return 0;
        int maxPairs = 0, left = 0, maxProduct = 1;

        for(int right=0;right<nums.size();right++)
        {
            maxProduct *= nums[right];

                while(left <= right && maxProduct >= k)
                {
                    maxProduct /= nums[left];
                    left++;
                }

            maxPairs += right-left+1;
        }

        return maxPairs;
        */

        // this is using the frame

        if(k == 0 || k == 1) return 0;

        int start=0,end=0, maxPairs = 0, product=1;


        while(end < nums.size())
        {
            product = product * nums[end];
        
            while(start <= end && product >= k)
            {
                product /= nums[start];
                start++;
            }

            maxPairs += end - start +1;
            end++;

        
        }

        return maxPairs;

        
    }
};