// Last updated: 7/2/2025, 11:55:47 PM
class Solution {
    public int[] twoSum(int[] nums, int target) {
      Map<Integer , Integer> map = new HashMap<>();
        for(int i=0;i<nums.length;i++)
        {
            int rem = target- nums[i];
            if(map.keySet().contains(rem)) return new int[]{i , map.get(rem)};
            map.put(nums[i] , i);
        }
        return new int[0];
    }
}