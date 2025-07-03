// Last updated: 7/2/2025, 11:55:23 PM
#include <vector>
#include <algorithm>

class Solution {
public:
    void nextPermutation(std::vector<int>& nums) {
        int n = nums.size();
        int i = n - 1;

        // Step 1: Find the pivot
        while (i >= 1 && nums[i - 1] >= nums[i]) {
            i--;
        }

        int pivot = i - 1;

        // If the pivot is valid
        if (pivot >= 0) {
            int j = n - 1;
            // Step 2: Find the successor to swap with
            while (j>= pivot && nums[j] <= nums[pivot]) {
                j--;
            }
            // Swap the pivot with the successor
            std::swap(nums[j], nums[pivot]);
        }

        // Step 3: Reverse the suffix
        std::reverse(nums.begin() + pivot + 1, nums.end());
    }
};
