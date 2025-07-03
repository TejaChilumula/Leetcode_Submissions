// Last updated: 7/2/2025, 11:50:06 PM
class Solution {
    public String truncateSentence(String s, int k) {
        int i=0 , j=0 , l=0;
        for(i=0;i<s.length();i++)
        {
            if(s.charAt(i) == ' ')
            {
                j++;
                if(j == k)
                {
                    l= i;
               
                }
            }
            //System.out.println(j);
        }
         System.out.println(l);
        if( l== 0) return s;
        else return s.substring(0 , l);
       
        //return s;
    }
}