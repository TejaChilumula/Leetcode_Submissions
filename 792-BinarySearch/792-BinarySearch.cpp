// Last updated: 7/2/2025, 11:52:03 PM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;

        if(nums.size() == 1 && nums[0] == target) return 0;

        while(l<r)
        {
            int mid = l + (r-l)/2;

            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) r = mid;
            else l = mid+1;

        }


        return (nums[l] == target ) ? l : -1;
    }
};