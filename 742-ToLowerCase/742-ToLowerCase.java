// Last updated: 7/2/2025, 11:52:09 PM
class Solution {
    public String toLowerCase(String s) {
        //return s.toLowerCase();
        StringBuffer a = new StringBuffer();
        for(char i : s.toCharArray())
        {
            if((int)i <= 90 && (int)i >= 65)
            a.append((char)((int)i + 32));
            else
            a.append(i);
        }
        return a.toString();
    }
}