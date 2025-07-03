// Last updated: 7/2/2025, 11:55:18 PM
class Solution {
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        Arrays.sort(candidates);

        List<List<Integer>> res = new ArrayList<>();
        help( res , candidates , target, 0, new ArrayList<>());
        return res;
    }
    public void help(List<List<Integer>> res , int[] arr , int tar , int i, ArrayList<Integer> lcl)
    {
        if(tar <0) return;
        if(tar == 0) {
            res.add(new ArrayList<Integer>(lcl));
            return;
        }
        for( int j = i; j<arr.length ; j++)
        {
            if( i<j && arr[j] == arr[j-1]) continue;

            lcl.add(arr[j]);
            help(res , arr , tar-arr[j],j+1, lcl);
            lcl.remove(lcl.size()-1);
        }
    }
}