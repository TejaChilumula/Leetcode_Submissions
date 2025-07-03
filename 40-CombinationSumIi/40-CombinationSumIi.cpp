// Last updated: 7/2/2025, 11:55:15 PM
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end(), greater<int>());
        
        vector<vector<int>> ans;
        vector<int> lcl;

        help(candidates, 0,target, ans, lcl);
        
        return ans;
        
    }

    void help(vector<int>& arr, int idx, int tar, vector<vector<int>> &ans,
    vector<int> &lcl)
    {
        if(tar == 0)
        {
            ans.push_back(lcl);
            return;
        }

        for(int i = idx ; i < arr.size();i++)
        {
            if(i > idx && arr[i] == arr[i-1]) continue;
            if(tar - arr[i] >= 0)
            {
                lcl.push_back(arr[i]);
                help(arr,i+1,tar-arr[i],ans,lcl);
                lcl.pop_back();
            }
        }
    }
};