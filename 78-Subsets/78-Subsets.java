// Last updated: 7/2/2025, 11:54:23 PM
class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        help(nums , 0, res , new ArrayList<Integer>());
        return res;
    }
    public void help(int[] nums ,int i,List<List<Integer>> res, ArrayList<Integer> lcl)
    {
        if(i == nums.length) 
        {
            res.add(new ArrayList<Integer>(lcl));
            return;
        }
        
        lcl.add(nums[i]);
        help(nums, i+1,res, lcl);
        lcl.remove(lcl.size()-1);
        help(nums ,  i+1,res,lcl);

    }
}