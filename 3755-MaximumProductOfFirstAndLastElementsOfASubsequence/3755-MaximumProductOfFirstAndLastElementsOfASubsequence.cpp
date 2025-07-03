// Last updated: 7/2/2025, 11:48:49 PM
class Solution {
public:
    long long maximumProduct(vector<int>& nums, int m) {
    long long ans = LLONG_MIN;
        int n = nums.size();
        vector<long long> inpt(nums.begin(), nums.end());

        long long max_prev = LLONG_MIN;
        long long min_prev = LLONG_MAX;

        for(int i=m-1;i<n;i++){
            int j = i - (m - 1);
            max_prev = max(max_prev, inpt[j]);
            min_prev = min(min_prev, inpt[j]);

            long long  prod1 = max(ans, max_prev*inpt[i]);
            long long  prod2 = max(ans, min_prev*inpt[i]);

            ans = max(ans, max(prod1, prod2));

            
        }
        return ans;

        /*
           for (int start = 0; start <= nums.size() - m; ++start) {
                int end = start + m - 1;
                ans = max(ans, 1LL * nums[start] * nums[end]);
            }
        
        return ans;
       */ 
        
    }



    /*    
    long long maximumProduct(vector<int>& nums, int m) {
        vector<int> arr;
        long long ans = LONG_MIN;
        helper(nums, m, 0, arr, ans);
        return ans;
    }

    void helper(vector<int> &nums, int m, int i, vector<int> &arr, long long &ans){
        if(arr.size() == m) {
            long long cur = 1LL*arr[0]*arr[arr.size()-1];
            ans = max(ans, cur);
            return;
        }

        if(i >= nums.size() || arr.size() > m) return;


        arr.push_back(nums[i]);
        helper(nums, m, i+1, arr, ans);
        arr.pop_back();
        helper(nums,m,i+1,arr,ans);
        
}
    */
    
};