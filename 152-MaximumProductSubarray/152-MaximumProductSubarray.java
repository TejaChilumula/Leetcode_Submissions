// Last updated: 7/2/2025, 11:53:34 PM
class Solution {
    public int maxProduct(int[] nums) {
        
        int prod=1,maxProd=Integer.MIN_VALUE;

        for(int i=0;i<nums.length;i++)
        {
            prod= prod*nums[i];
            maxProd=Math.max(maxProd,prod);
            if(prod==0)
            {
                prod=1;
            }
        }

        prod=1;
        for(int i=nums.length-1;i>0;i--)
        {
            prod= prod*nums[i];
            maxProd=Math.max(maxProd,prod);
            if(prod==0)
            {
                prod=1;
            }
        }

        return maxProd;
    }
}