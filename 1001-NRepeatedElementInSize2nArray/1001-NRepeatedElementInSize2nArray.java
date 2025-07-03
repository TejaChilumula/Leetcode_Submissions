// Last updated: 7/2/2025, 11:51:32 PM
class Solution {
    public int repeatedNTimes(int[] nums) {
        Arrays.sort(nums);
        int l = nums.length;
        for(int i=1;i<nums.length;i++)
        {
            if(nums[i-1] == nums[i]) return nums[i];
        }
        return nums[l-1];
    }
}