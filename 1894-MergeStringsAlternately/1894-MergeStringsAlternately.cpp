// Last updated: 7/2/2025, 11:50:14 PM
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s = "";

        int i =0 , j =0,check=0;

        while(i < word1.size() && j < word2.size())
        {
          if(check == 0) s += word1[i++];
           else
           s += word2[j++];

           check = 1-check;

        }
        while(i < word1.size()) s += word1[i++];
        while(j < word2.size()) s+= word2[j++];

        return s;
    }
};