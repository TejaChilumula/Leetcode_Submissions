// Last updated: 7/2/2025, 11:49:34 PM
class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        // *** Naive Appraoch *** from the back and each time change low and i to n - too slow, each comparision again from the back
        // int n = nums.size();
        // int low = 0, i = n-1, c= 0;
        // while(i>=low){
            
        //     if((nums[i] - nums[low])<=k) {
        //         c++;
        //         low = i+1;
        //         i = n-1;
        // }
        // else
        //     i--;
            
        // }
        // return c;

        //****** Sliding window ****, still its a subsequence, but we sorted so it going to to subArray, then its S.W

    int i = 0, c =0, n = nums.size();
    
    while(i < n){
        int start = nums[i];
        c++;

        while(i < n && (nums[i] - start) <= k) i++;


    }
    return c;

    
    }
};