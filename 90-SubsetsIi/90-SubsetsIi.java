// Last updated: 7/2/2025, 11:54:17 PM
class Solution {
    public List<List<Integer>> subsetsWithDup(int[] nums) {
        Arrays.sort(nums);
        List<List<Integer>> res = new ArrayList<>();
        help(res , nums, 0, new ArrayList<Integer>());
        return res;
    }
    public void help(List<List<Integer>> res, int[] nums, int i, ArrayList<Integer> lcl)
    {
        res.add(new ArrayList<Integer>(lcl));
        if(i == nums.length) return;

        for(int j=i;j<nums.length;j++)
        {
            if(i<j && nums[j] == nums[j-1]) continue;

            lcl.add(nums[j]);
            help(res , nums , j+1,lcl);
            lcl.remove(lcl.size()-1);
            //help(res, nums, j+1, lcl);
        }
    }

}