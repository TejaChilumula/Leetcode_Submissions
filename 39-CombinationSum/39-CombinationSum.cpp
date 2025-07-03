// Last updated: 7/2/2025, 11:55:17 PM
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

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
            if(tar - arr[i] >= 0)
            {
                lcl.push_back(arr[i]);
                help(arr,i,tar-arr[i],ans,lcl);
                lcl.pop_back();
            }
        }
    }
};