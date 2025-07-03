// Last updated: 7/2/2025, 11:53:47 PM
class Solution {
    public List<List<String>> partition(String s) {
        List<List<String>> res = new ArrayList<>();
        List<String> l = new ArrayList<>();
        help(s , 0 , res, l, s.length());
        return res;
    }
    public void help( String s , int i, List<List<String>> res , List<String> l , int n)
    {
        if(i == n) 
        {
            res.add(new ArrayList<String>(l));
            return;
        }
        for(int j=i;j<n;++j)
        {
            
            if(isPalin(s , i , j)) 
            {
                l.add(s.substring(i,j+1));
                help(s,j+1,res,l,n);
                l.remove(l.size()-1);
            }
        }
    }

    public boolean isPalin(String s , int strt, int end)
    {
        while (strt < end) {
            if (s.charAt(strt) != s.charAt(end))
                return false;
            strt++;
            end--;
        }
        return true;
    }
    
}