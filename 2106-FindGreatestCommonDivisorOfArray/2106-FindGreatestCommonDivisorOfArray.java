// Last updated: 7/2/2025, 11:49:55 PM
class Solution {
    public int findGCD(int[] nums) {
        Arrays.sort(nums);
        int min = nums[0];
        int len = nums.length-1;
        int max = nums[len];
        while(max > 1)
        {
            if(max%min == 0 ) return min;
            int temp = max;
              max = min;
            min = temp%min;
          
        }
        return 1;
    }
}