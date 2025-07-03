// Last updated: 7/2/2025, 11:49:45 PM
class Solution {
    public List<Integer> targetIndices(int[] nums, int target) {
        Arrays.sort(nums);
        int l = 0;
        int h = nums.length-1;
      
        List<Integer> res = new ArrayList<>();
        int lesscnt = 0;
        int tarcnt = 0;
      
        for(int i : nums)
        {
            if(i == target) tarcnt++;
            if(i<target) ++lesscnt;
        }
        while(tarcnt>0)
        {
          res.add(lesscnt++);  
            tarcnt--;
        } 
        return res;
    }
}