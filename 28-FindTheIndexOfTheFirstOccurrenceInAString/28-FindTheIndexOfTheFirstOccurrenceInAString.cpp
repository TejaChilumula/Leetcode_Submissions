// Last updated: 7/2/2025, 11:55:25 PM
class Solution {
public:
    int strStr(string haystack, string needle) {
        
        for(int i=0;i<haystack.size();i++){
            int j=0;
            if(haystack[i] == needle[j]){
                while(j < haystack.size() && haystack[i+j] == needle[j]){
                    if(j == needle.size()-1) return i;
                    j++;
                }
            }
        }
        return -1;
    }
};