// Last updated: 7/2/2025, 11:54:34 PM
class Solution {
    public String getPermutation(int n, int k) {
        
        List<Integer> arr = new ArrayList<>();
        int fact = 1;
        for(int i=1;i<n;i++)
        {
            fact *= i;
            arr.add(i);
        }
        // fact will only upto n-1 numbers because we want to know
        // at which set it presents
        /**
        for ex : n=4 , f=24 , k=17 , n=3 , f=6
         so for n=4 there will be 6 permut for each no.
         for n=3 there will be 2 permut for each no.
         for n there will be n-1! permut
         */
         // n excluded in fact
         arr.add(n);
         String s = "";
         k = k-1;
        while(true)
        {
            s+=arr.get(k/fact);
            arr.remove(k/fact);
            if(arr.size() == 0) break;
            k = k%fact;
            fact = fact/arr.size();
        }
        return s;
    }
// Normal permutation
    public void help(List<String> res , int n, String s)
    {
        if(s.length() == n)
        {res.add(s);
        return;}
        for(int i=1;i<=n;i++)
        {
            if(s.indexOf((char)i) == -1) 
            {
                s+=i;
                help(res,n,s);
                s = s.substring(1, s.length() - 1);
            }
        }
    }
}