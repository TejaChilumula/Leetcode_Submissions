// Last updated: 7/2/2025, 11:54:21 PM
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> lcl;

        help(n, 1,k, ans, lcl);
        
        return ans;
    }
    void help(int n, int idx, int k, vector<vector<int>> &ans,
    vector<int> &lcl)
    {
        if(lcl.size() == k)
        {
            ans.push_back(lcl);
            return;
        }

        for(int i = idx ; i <= n;i++)
        {
                lcl.push_back(i);
                help(n,i+1,k,ans,lcl);
                lcl.pop_back();
            }
        }
    
};