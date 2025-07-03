// Last updated: 7/2/2025, 11:51:05 PM
class Solution {
    public boolean uniqueOccurrences(int[] arr) {
        
        Map<Integer , Integer> map = new HashMap<>();
        for(int i : arr)
        {
            map.put(i , map.getOrDefault(i , 0)+1);
            
        }
        Set<Integer> s = new HashSet<>(map.values());
        return s.size() == map.size();
    }
}