// Last updated: 7/2/2025, 11:49:53 PM
class Solution {
    public int finalValueAfterOperations(String[] operations) {
        int c=0;
        for(String i : operations)
        {
            if(i.contains("+"))
                c++;
            if(i.contains("-")) c--;
        }
        return c;
    }
}