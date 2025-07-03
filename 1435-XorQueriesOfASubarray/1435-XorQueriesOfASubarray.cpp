// Last updated: 7/2/2025, 11:50:52 PM
class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {

        int n = arr.size();
        vector<int> preXOR(n);
        vector<int> ans;
        preXOR[0] = arr[0];

        for(int i=1;i<n;i++)preXOR[i] = arr[i]^preXOR[i-1];

        for(auto query : queries){
            int l = query[0], r = query[1];
            if(l == r) ans.push_back(arr[l]);
            else if(l == 0) ans.push_back(preXOR[r]);
            else{
                ans.push_back(preXOR[r]^preXOR[l-1]);
            }
        }
        return ans;
    }
};