// Last updated: 7/2/2025, 11:52:05 PM
class Solution {
    public int numJewelsInStones(String jewels, String stones) {
        int c=0;
        //char []a = jewels.toCharArray();
        for(char i : stones.toCharArray())
        {
          if(jewels.indexOf(i)!=-1)c++;
        }
        return c;
    }
}