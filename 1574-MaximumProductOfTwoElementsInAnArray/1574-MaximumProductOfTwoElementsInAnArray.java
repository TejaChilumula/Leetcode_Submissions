// Last updated: 7/2/2025, 11:50:40 PM
class Solution {
    public int maxProduct(int[] nums) {
        Arrays.sort(nums);
        int l = nums.length;
        int max = nums[l-1];
        int second_max = nums[l-2];
        return (max-1)*(second_max-1);
    }
}