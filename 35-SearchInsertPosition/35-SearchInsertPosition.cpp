// Last updated: 7/2/2025, 11:55:19 PM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int  left = 0, right = nums.size()-1;

        while(left <= right)
        {
            int mid = left + (right - left)/2;

            if(nums[mid] == target) return mid;

            if(nums[mid] < target) left = mid +1;
            else right = mid-1;
        }

        return left;

    }
};