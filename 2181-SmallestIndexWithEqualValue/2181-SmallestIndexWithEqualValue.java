// Last updated: 7/2/2025, 11:49:48 PM
class Solution {
    public int smallestEqual(int[] nums) {
        for(int i=0;i<nums.length;i++)
        {
            if(nums[i] == i%10) return i;
        }
        return -1;
    }
    
}