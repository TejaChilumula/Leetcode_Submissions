// Last updated: 7/2/2025, 11:49:47 PM
class Solution {
public:
    long long countVowels(string word) {
        
        // we camn do it in DP and recursive way.

        // The efficient optimised way is that. 
        // 1.the char will be present in all the substrings that start from it
        // 2. char will present in all the substrings end by it.
        // e is in middle present in the substrings present before and after
        /*
            abei
            a       b       e   i
            ab      be      ei
            abe     bei
            abei
        */

        long res = 0;

        for(int i=0;i<word.length();i++)
        {
            if(string("aeiou").find(word[i]) != string::npos)
                res += (i+1)*(word.length()-i);
        }

        return res;
    }
};