// Last updated: 7/2/2025, 11:55:38 PM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int k = 0;
        for(int i=0;i<strs[0].size();i++){
            char c = strs[0][i];
            for(int j=1;j<n;j++){
                if(i >= strs[j].size() || strs[j][i] != c) {
                    return strs[0].substr(0,k);
                }
                cout<<c;
            }
            k++;
        }
        if (k == 0) return "";
        return strs[0].substr(0,k);
    }
};