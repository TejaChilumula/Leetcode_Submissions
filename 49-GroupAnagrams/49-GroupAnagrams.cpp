// Last updated: 7/2/2025, 11:55:09 PM
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;
        int n = strs.size();

        for(int i=0;i<n;i++){
            string sorted_str = strs[i];
            sort(sorted_str.begin(), sorted_str.end());
            mp[sorted_str].push_back(strs[i]);
        }

        vector<vector<string>> ans;

        for(auto &ele : mp){
            ans.push_back(move(ele.second));
        }

        return ans;
    }
};