// Last updated: 8/18/2025, 9:04:46 PM
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;

        for(int i=0;i<strs.size();i++){
            string key = strs[i];
            sort(key.begin(), key.end());
            mp[key].push_back(strs[i]);
        }

        vector<vector<string>> res;

        for(auto entry : mp){
            res.push_back(entry.second);
        }


        return res;
    }
};