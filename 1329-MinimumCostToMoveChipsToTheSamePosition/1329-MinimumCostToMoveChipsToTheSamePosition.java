// Last updated: 7/2/2025, 11:51:03 PM
class Solution {
    public int minCostToMoveChips(int[] position) {
        int even = 0 , odd =0;
        for(int i : position)
        {
            if(i%2 == 1) odd++;
            else even++;
        }
        return Math.min(even , odd);
    }
}