// Last updated: 7/2/2025, 11:50:31 PM
class Solution {
    public int maxCoins(int[] piles) {
        int sum =0 ;
        int n = piles.length;
        Arrays.sort(piles);
        int k = n/3;
        for(int i=k;i<n;i+=2)
        {
            sum+=piles[i];
        }
        return sum;
    }
}