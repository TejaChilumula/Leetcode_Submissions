// Last updated: 7/2/2025, 11:55:21 PM
class Solution {
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> res = new ArrayList<>();
        help(candidates , target , res , new ArrayList<>(),  0);
        return res;
    }
    public void help(int[] arr , int tar, List<List<Integer>> l, ArrayList<Integer> lcl , int i)
    {
        if(i == arr.length || tar<=0)
        {
            if(tar == 0) l.add(new ArrayList<>(lcl));
            return;
        }
        lcl.add(arr[i]);
        help(arr , tar-arr[i], l, lcl, i);
        lcl.remove(lcl.size()-1);
        help(arr, tar , l, lcl , i+1);
    }
}