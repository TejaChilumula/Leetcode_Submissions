// Last updated: 7/2/2025, 11:51:06 PM
class Solution {
    public int wateringPlants(int[] plants, int capacity) {
        int can = capacity;
        int res =0 ;
        for(int i=0;i<plants.length;i++)
        {
            if(plants[i]<=can)
            {
                res++;
                can -= plants[i];
            }
            else{
            res++;
            res += 2*i;
            can = capacity-plants[i];}
        }
      return res;
    
    }
}