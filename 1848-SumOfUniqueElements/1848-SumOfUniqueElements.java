// Last updated: 7/2/2025, 11:50:15 PM
class Solution {
    public int sumOfUnique(int[] nums) {
        
//         Arrays.sort(nums);
//         int u=0;
//         int sum= 0;
//         for(int i=1;i<nums.length;i++)
//         {
//             if(nums[i] != nums[i-1]) 
//             {
//                 sum+=nums[i-1];
//                 u++;
//             }
//         }
//         if(u==nums.length-1)
//         {
//             return sum;
//         }
//         return 0;
            
//     
       Map<Integer , Integer> map = new HashMap<>();
        int sum = 0;
        for(int i: nums)
        {
           map.put(i , map.getOrDefault(i , 0)+1);
            if(map.get(i) == 1) sum+=i;
            else if(map.get(i) == 2) sum-=i;
        }
  
        return sum;

}}