// Last updated: 7/2/2025, 11:51:01 PM
class Solution {
    public int balancedStringSplit(String s) {
        int r=0,l=0,k=0;
        for(char i : s.toCharArray())
        {
            if(i=='R')r++;
            else l++;
            if(r == l)
            {
                k++;
                r=0;
                l=0;
            }
        }
        return k;
    }
}