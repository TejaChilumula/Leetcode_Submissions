// Last updated: 7/2/2025, 11:50:48 PM
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        map<int, vector<int>> mp;
        int n = arr.size();

        for(auto num : arr){
            int c = __builtin_popcount(num);

            mp[c].push_back(num);
        }

        vector<int>res;

        for(auto entry : mp){
            sort(entry.second.begin(), entry.second.end());
            res.insert(res.end(), entry.second.begin(), entry.second.end());
        }
        return res;
    }
};