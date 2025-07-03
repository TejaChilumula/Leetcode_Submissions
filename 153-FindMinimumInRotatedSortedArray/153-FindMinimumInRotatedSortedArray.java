// Last updated: 7/2/2025, 11:53:45 PM
class Solution {
    public int findMin(int[] nums) {
        
        int min = nums[0];
      int l = 0;
        int h = nums.length-1;
        while(l<h)
        {
            int mid = (l+h)/2;
            //min = nums[mid];
            if(nums[mid]<nums[h]) h = mid;
            else l = mid+1;
        }
        return nums[l];
    }
}