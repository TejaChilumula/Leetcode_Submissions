// Last updated: 7/2/2025, 11:53:49 PM
class Solution {
    public int singleNumber(int[] nums) {
        Arrays.sort(nums);
        int len = nums.length;
        int j=0;
        if(len == 1) return nums[0];
        if(nums[0] == nums[1]) j=2;
        else return nums[0];
        for(int i=j;i<nums.length-2 ; i+=2)
        {
            if(nums[i] != nums[i+1]) return nums[i];
        }
        return nums[len-1];
    }
}