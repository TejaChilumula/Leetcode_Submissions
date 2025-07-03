// Last updated: 7/2/2025, 11:53:19 PM
class Solution {
    public boolean containsDuplicate(int[] nums) {
        
        Set<Integer> s = new HashSet<>();
        for(int i: nums)
        {
            if(s.contains(i)) return true;
            s.add(i);
        }
        return false;
    }
}