// Last updated: 7/2/2025, 11:50:12 PM
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int a=0,c=0;
        if(ruleKey == "type")a=0;
        else if(ruleKey == "color")a=1;
        else a=2;
        for(int i=0;i<items.size();i++)
            if(items[i][a] == ruleValue)c++;
        return c;
    }
};