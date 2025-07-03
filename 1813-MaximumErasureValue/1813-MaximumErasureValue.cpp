// Last updated: 7/2/2025, 11:50:21 PM

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int, int> mp; // Tracks the last index of each element.
        /*int maxSum = 0, currentSum = 0, left = 0; // maxSum for the result, currentSum for the current window's sum.

        for (int right = 0; right < nums.size(); ++right) {
            if (mp.find(nums[right]) != mp.end()) {
                // When a duplicate is found, ensure we move 'left' to the right of the previous instance.
                // Also, subtract the elements' values that are no longer in the current window from currentSum.
                while (left <= mp[nums[right]]) {
                    currentSum -= nums[left];
                    left++;
                }
            }

            // Add the current element to currentSum and update the map.
            currentSum += nums[right];
            mp[nums[right]] = right; // Update or insert the position of nums[right].

            // Update maxSum if the current window's sum is greater.
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;*/


        // format method

        int start = 0, end = 0, counter = 0, sum = 0, maxSum = 0;

        while(end < nums.size())
        {

            if(mp.find(nums[end]) != mp.end()) 
            {
                while(start <= mp[nums[end]])
                {
                        sum -= nums[start];
                        start++;
                }

               
            }
             sum += nums[end];
             mp[nums[end]] = end;

             maxSum = max(maxSum, sum);
             end++;

        }

        return maxSum;
    }


};