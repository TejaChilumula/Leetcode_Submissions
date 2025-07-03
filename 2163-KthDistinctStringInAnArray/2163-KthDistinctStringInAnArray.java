// Last updated: 7/2/2025, 11:49:51 PM
class Solution {
    public String kthDistinct(String[] arr, int k) {
        Map<String , Integer> s = new HashMap<>();
        for(String i : arr)
        {
            s.put(i , 1+s.getOrDefault(i , 0));
        }
     
        for(String i : arr)
        {
            System.out.println(s.get(i));
            if(s.get(i) == 1)
            {
                if(k==1) return i;
                k--;
            }
        }
        return "";
    }
}