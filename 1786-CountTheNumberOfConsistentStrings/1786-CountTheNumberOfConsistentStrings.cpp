// Last updated: 7/2/2025, 11:50:24 PM
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
         set<char>s;
        int flag =0 , c=0;
        for(char i:allowed) s.insert(i);
        for(int i=0;i<words.size();i++)
        {
            for(char c : words[i])
            {
                if(s.find(c) ==s.end()) flag = 1;
            }
            if(flag ==0) c++;
            flag=0;
        }
        return c;
    }
};