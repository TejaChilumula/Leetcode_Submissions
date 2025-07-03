// Last updated: 7/2/2025, 11:55:14 PM
class Solution {
    public int maxSubArray(int[] nums) {
        
        if(nums.length == 1) return nums[0];
        int minlocal = 0;
        int maxsoFar = Integer.MIN_VALUE;
        for(int i=0;i<nums.length;i++)
        {
            
          // minlocal = Math.max(minlocal+nums[i] , nums[i]);
          //   maxsoFar = Math.max(maxsoFar , minlocal);
            minlocal += nums[i];
            if(minlocal>maxsoFar) maxsoFar = minlocal;
            if(minlocal<0) minlocal = 0;
        }
        return maxsoFar;
    }
}